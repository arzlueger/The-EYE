#include <stdio.h>
#include <math.h>
#include <conio.h>
//This is the interface for the main menu of the game.//
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
int Main_menu_English()
{
	int Menu=1;//Speaks for itself. It is the indicator for the Menu in the Game.//
	char HI;//HI means Human Inteface and that is exactly what it does.//
	while(1==1)//Asks till you make a decison.//
	{
		printf("Use WASD to control\nUse E for OK\n\nMenu:\n\"Start new game\"\n\"\Help\"\n\"Exit\"\n\n");//More options are coming in later releases.//
		switch(Menu)//Used for the grahical feedback to the user.//
		{
			case 1:
				printf("\"Start new game\"");//Start a new game.//
				break;
			case 2:
				printf("\"Help\"");//Help the player.//
				break;
			case 3:
				printf("\"Exit\"");//Bye.Bye.Exits the game//
				break;
		}
		HI=getch();
		if(HI=='e')//OK//
		{
			break;
		}
		if(HI=='w'&&Menu>1)//Up//
		{
			Menu--;
		}
		if(HI=='s'&&Menu<3)//Down//
		{
			Menu++;
		}
		system("cls");//The magic and overhelming "Clear Screen". This is so the user thinks this is an real menu, where you can move up and down in a list.//
	}
	system("cls");//A blank page for the next menu.//
	return Menu;//Returns the made decision to the real menu.//
}