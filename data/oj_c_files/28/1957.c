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


int main()
{
	int i, j=0, m=0;
	int sum[301] ={0};
	char word[3000];

	gets(word);
	
	for(i = 0; word[i]!='\0'; i++)
	{
		if(word[i]!=' ')
			sum[j]++;
		else
		{
			j++;
			while(word[i]==' ')
				i++;
			i = i - 1;
		}
	}
		printf("%d", sum[0]);
		for(i = 1; i <= j; i++)
			printf(",%d", sum[i]);
	return 0;
}