#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
extern int Language_English();
extern int Difficulty_German();
extern int Difficulty_English();
extern void Game(int Difficulty);
int main()
{
	int Language, Difficulty;
	Language=Language_English();
	if(Language==1)
	{
		Difficulty=Difficulty_English();
	}else
	{
		Difficulty=Difficulty_German();
	}
	Game(Difficulty);
	getch();
}