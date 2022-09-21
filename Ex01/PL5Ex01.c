#include <stdio.h>
#include <stdlib.h>


#define size 512


float a[size][size],b[size][size],c[size][size];

void populate()
{
	for(int i = 0; i<size ;i++)
		for(int j = 0; j<size;j++)
		{
			a[i][j] = rand() % 100;
			b[i][j] = rand() % 100;
		}
}

void mult()
{
	for(int i = 0; i<size ;i++)
		for(int j = 0; j<size;j++)
			for(int k = 0; k < size; k++)
				c[i][j] += a[i][k]*b[k][j];
}


void prin()
{
	for(int i = 0; i<3 ;i++)
	{
		printf("\n");
		for(int j = 0; j<3;j++)
			printf("%.2f",c[i][j]);
	}
}


int main()
{
	populate();
	mult();
	//prin();
	return 0;
}
