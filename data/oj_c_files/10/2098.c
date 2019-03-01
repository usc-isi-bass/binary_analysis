#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char* argv[])
{
	int min[26];
	int data[26];
	int N;
	int i , j;
	int minLength;
	scanf("%d" , &N);
	for(i = 0 ; i < N ; i++)
	{
		scanf("%d" , &data[i]);
	}
	min[0] = 1;
	for (i = 1 ; i < N ; i++)
	{
		minLength = 0;
		for (j = 0 ; j < i ; j++)
		{
			if (data[i] <= data[j])
			{
				if (min[j] > minLength)
				{
					minLength = min[j];
				}
			}
		}
		min[i] = minLength + 1;
	}
	//zhaozuixiao
	minLength = 0;
	for (i = 0 ; i < N ; i++)
	{
		if (min[i] > minLength)
		{
			minLength = min[i];
		}
	}

	printf("%d\n" , minLength);
	return 0;
}

