#include "menu.h"

void logo(){
    char t = 219;
    char v = 220;
    char u = 223;
    printf("\n\n\n");
    printf("  %c%c%c%c%c%c   %c%c%c   %c%c%c%c     %c%c%c%c\n", v, t, u, u, u, v, v, u, v, t, u, u, v, v, u, u, v);
    printf("  %c       %c%c%c%c%c  %c  %c%c   %c    %c\n", t, t, v, v, v, t, t, v, u, t, t);
    printf("  %c       %c%c%c%c%c  %c%c%c%c    %c    %c\n", t, t, u, u, u, t, t, u, u, v, t, t);
    printf("  %c%c%c%c%c%c  %c   %c  %c   %c%c   %c%c%c%c\n", u, t, v, v, v, u, t, t, t, u, v, u, v, v, u);
}

void authors(){
    printf("\n\n\n");
    printf("Authors:\n1. Tran Quang Khai   - 1712514\n2. Nguyen Phuc Khang - 1712224\n3. Nguyen Minh Quan  - 1712694\n4. Phan Gia Hao      - 1712420\n");
}

void goodbye(){
    printf("\n\n\n");
    printf("See you next time!!\n\n");
}

int get_mode(){
    char input;
    int choice = 0;
    printf("\n\nModes:\n1. PvP\n2. PvE\n3. Exit\n\nPress a key to choose (1 / 2 / Esc)");
    while (1) {
        input = _getch();
        if (input == '1') choice = 1;
        else if (input == '2') choice = 2;
        else if (input == 27) choice = 3;               //ASCII code for ESC
        if(choice != 0) return choice;
    }
    return -1;
}

void get_names(int mode, Player &p1, Player &p2){
    if (mode == 1) {
        printf("\n\n\nMode: PvP\n\nEnter the first player's name: ");
        gets_s(p1.name, 109);
        printf("Enter the second player's name: ");
        gets_s(p2.name, 109);
    }
    else {
        printf("\n\n\nMode: PvE\n\nEnter your username: ");
		gets_s(p1.name, 109);
        strcpy_s(p2.name, "Computer");
    }
}

int menu(Player &p1, Player &p2){
    logo();
    authors();
    int mode = get_mode();
    if(mode == 3) return 3;
    get_names(mode, p1, p2);
    return 0;
}
