//This is copied from my former project snake, so it is not quit new.//
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
int Language_German()
{
	char HI, HI_OK=0;//HI means Human Inteface and that is exactly what it does.//
	while(1==1)
	{
		printf("Benutze WASD zum steuern\nBenutze E fuer OK\n\nLanguage:\n\"English\"\n\"\German\"\n\n");//More are (possibly) coming in later releases.//
		printf("\"German\"");//Used for the grahical feedback to the user.//
		HI=getch();
		if(HI=='e')//OK//
		{
			break;
			system("cls");
			return 1;
			
		}
		if(HI=='w')//Down//
		{
			system("cls");
			return 0;
		}
		system("cls");//A blank page for a new menu.//
	}
	
}