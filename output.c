// function definition of output_results()
#include "score.h"
#include <stdio.h>

void output_results(const int m[], const stat[])
{
	int i;
	printf("\nHere are the marks: \n");
	for(i=0; i<MAX && m[i] != -1; i++)
	{
		printf("%4d", m[i]);
	}
	printf("\n\nHere are the statistics: \n");
	for(i=0; i<6; i++)
	{
		printf("Mark %d: %d hits\n", i, stat[i]);
	}
}

