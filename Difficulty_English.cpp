//This is copied from my former project snake, so it is not quit new.//
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
int Difficulty_English()
{
	int Difficulty=2;//Speaks for itself. It is the indicator for the difficulty in the Game.//
	char HI;//HI means Human Inteface and that is exactly what it does.//
	while(1==1)
	{
		printf("Use WASD to control\nUse E for OK\n\nDifficulty:\n\"Homer Simpson\"\n\"\Forrest Gump\"\n\"Stephen Hawking\"\n\n");//More are coming in later releases.//
		switch(Difficulty)//Used for the grahical feedback to the user.//
		{
			case 1:
				printf("\"Homer Simpson\"");//Easy//
				break;
			case 2:
				printf("\"Forrest Gump\"");//Medium//
				break;
			case 3:
				printf("\"Stephen Hawking\"");//Hard//
				break;
		}
		HI=getch();
		if(HI=='e')//OK//
		{
			break;
		}
		if(HI=='w'&&Difficulty>1)//Up//
		{
			Difficulty--;
		}
		if(HI=='s'&&Difficulty<3)//Down//
		{
			Difficulty++;
		}
		system("cls");//The magic and overhelming "Clear Screen".//
	}
	system("cls");//A blank page for a new menu.//
	return Difficulty;
}