#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
void Column()
{
	srand(time(NULL));
	for(int Column=rand()%80;Column>0;Column--)
	{
		printf(" ");
	}
}