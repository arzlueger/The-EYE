#include <stdio.h>
#include <math.h>
#include <conio.h>
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
	while(1==1)
	{
		printf("Use WASD to control\nUse E for OK\n\nMenu:\n\"Start new game\"\n\"\Help\"\n\"Exit\"\n\n");//More are coming in later releases.//
		switch(Menu)//Used for the grahical feedback to the user.//
		{
			case 1:
				printf("\"Start new game\"");//Easy//
				break;
			case 2:
				printf("\"Help\"");//Medium//
				break;
			case 3:
				printf("\"Exit\"");//Hard//
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
		system("cls");//The magic and overhelming "Clear Screen".//
	}
	system("cls");//A blank page for a new menu.//
	return Menu;
}