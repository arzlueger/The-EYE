#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
void Line()
{
	srand(time(NULL));
	for(int Line=rand()%26;Line>0;Line--)
	{
		printf("\n");
	}
}