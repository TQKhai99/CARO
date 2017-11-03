#include <cstdlib>
#include <conio.h>
#include <Windows.h>

#include "menu.h"
#include "utils.h"
#include "player.h"
#include "board.h"

Player p1, p2;

int main(){
    atexit(goodbye);
	resize_console(1100, 710);

    int exit_code = menu(p1, p2);
    if(exit_code == 3) return 0;

    system("cls");
    printf("Player 1: %s\nPlayer 2: %s\n", p1.name, p2.name);
    wait("start");
    
    system("cls");
    draw_board();
    wait("quit");
    return 0;
}
