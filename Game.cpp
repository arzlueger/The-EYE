#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <dos.h>
extern void Line();
extern void Column();
extern void Difficulty(int Difficulty,int *Rounds, int *Numbers, int *Time);
void Output(int Numbers);
void Game(int Difficulty)
{	
	int *Rounds, *Numbers, *Time;
	Rounds=&Rounds;
	Numbers=&Numbers;
	Time=&Time;
	srand(time(NULL));
	do
	{
		Output(*Numbers);
		*Rounds--;
	}while(*Rounds>0);
	_sleep(*Time);
	system("cls");
}
void Output(int Numbers)
{
	while(Numbers<0);
	{
		Numbers--;
		Line();
		Column();
		printf("%d", rand());
	}
}