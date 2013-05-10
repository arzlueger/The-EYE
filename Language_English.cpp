//This is copied from my former project snake, so it is not quit new.//
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
extern int Language_German();
int Language_English()
{
	char HI, HI_OK;//HI means Human Inteface and that is exactly what it does.//
	while(1==1)
	{
		printf("Use WASD to control\nUse E for OK\n\nLanguage:\n\"English\"\n\"\German\"\n\n");//More are (possibly) coming in later releases.//
		printf("\"English\"");//Used for the grahical feedback to the user.//
		HI=getch();
		if(HI=='e')//OK//
		{
			break;
			return 1;
		}
		if(HI=='s')//Down//
		{
			HI_OK=0;
		}
		system("cls");//The magic and overhelming "Clear Screen".//
		if(HI_OK==0)
		{
			system("cls");
			HI_OK=Language_German();
		}
		if(HI_OK==1)
		{
			break;
			return 2;
		}
	}
	system("cls");//A blank page for a new menu.//
}