#include <stdio.h>
#include <stdlib.h>


#define size 512


float **a,**b,**c;

void init(float ***m)
{
	*m = (float**) malloc(size*sizeof(float*));
	for(int i = 0; i<size ;i++)
		(*m)[i] = (float*) malloc(size*sizeof(float));
}

void populate(float **m)
{
	for(int i = 0; i<size ;i++)
		for(int j = 0; j<size;j++)
			m[i][j] = rand() % 100;
}

void mult(float **m,float **x)
{
	for(int i = 0; i<size ;i++)
		for(int j = 0; j<size;j++)
			for(int k = 0; k < size; k++)
				c[i][j] += m[i][k]*x[k][j];
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
	init(&a);
	init(&b);
	init(&c);
	populate(a);
	populate(b);
	populate(c);
	mult(a,b);
	prin();
	return 0;
}
