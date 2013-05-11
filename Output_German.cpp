#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
void Output_German(int Points, int Difficulty)
{
	int Points2;
	Points2=Points/Difficulty;
	switch(Points2)
	{
	case 3:
		printf("Exzellent!!!\nDu bist ein Genie %d Punkte!", Points);
		break;
	case 2:
		printf("Super!!!\nDu bist sehr gut %d Punkte", Points);
		break;
	case 1:
		printf("Toll!!!\nDu bist gut, du hast %d Punkte", Points);
		break;
	case 0:
		printf("Was? Null Punkte?");
		break;
	}
	printf("\nDrück einen Knopf zum fortsetzen des Spieles.");
	getch();
	system("cls");
}