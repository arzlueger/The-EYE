#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
void Difficulty()
{
	int Rounds, Numbers, Time;
	switch(Difficulty)
	{
	case 1:
		Rounds=5;
		Numbers=1;
		Time=3;
	case 2:
		Rounds=10;
		Numbers=2;
		Time=2;
	case 3:
		Rounds=15;
		Numbers=3;
		Time=1;
	}
}