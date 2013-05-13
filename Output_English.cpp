//Says you how good you were.//
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
void Output_English(int Points, int Difficulty)
{
	system("cls");//Clears the screen for these menu.//
	int Points2;
	Points2=Points/Difficulty;//Makes the one output compatible to the different difficultys.//
	switch(Points2)
	{
	case 3:
		printf("Excellent!!!\nYou are genius, you have %d Points!", Points);
		break;
	case 2:
		printf("Awesome!!!\nYou are very good, you have %d Points", Points);
		break;
	case 1:
		printf("Super!!!\nYou are good, you have %d Points", Points);
		break;
	case 0:
		printf("What? Zero Points?");
		break;
	}
	printf("\nPress a button to continue.");
	getch();//Have you seen enough?//
	system("cls");//A blank page for the next menu//
}