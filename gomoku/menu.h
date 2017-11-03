#ifndef _MENU_H_
#define _MENU_H_

#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <Windows.h>

#include "player.h"

void logo();
void authors();
void goodbye();
int get_mode();
int get_usernames(int, Player&, Player&);
int menu(Player&, Player&);

#endif
