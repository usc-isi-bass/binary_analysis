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



typedef struct 
{
	char c;
	int count;
} letterCount; //????????????????

int main()
{
	int i,j;
	char str[MAXLENGTH];
	letterCount lc[MAXLENGTH]; //?????
	//??
	fgets(str, MAXLENGTH, stdin);

	//???????????
	for (i = 0; i < MAXLENGTH; i++)
	{
		if(str[i] == '\n')
			break;
		if (str[i] >=97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}

	//???????
	j = 0; //????????
	i = 0; //?????

	lc[j].c = str[0];
	lc[j].count = 1;
	while (true)
	{
		if (str[i] == str[i + 1])
		{
			lc[j].count++;
			i++;
		}
		else
		{
			if (str[i + 1] == '\n')
				break;

			j++;
			lc[j].c = str[i + 1];
			lc[j].count = 1;
			i++;
		}
	}
	
	//??
	for (int i = 0; i <=j; i++)
	{
		printf("(%c,%d)", lc[i].c, lc[i].count);
	}
	printf("\n");
	return 0;
}