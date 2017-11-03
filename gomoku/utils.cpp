#include "utils.h"

void resize_console(int w, int h) {
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //stores the console's current dimensions
	MoveWindow(console, r.left, r.top, w, h, TRUE);
}

void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void setcolor(WORD color){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void print_color(const char *s, WORD color){
    setcolor(color);
    printf("%s", s);
    setcolor(DEFAULT);
}

void print_color(char c, WORD color){
    setcolor(color);
    printf("%c", c);
    setcolor(DEFAULT);
}

void wait(const char* s){
    printf("Press any key to %s...", s);
    _getch();
    printf("\n\n");
}
