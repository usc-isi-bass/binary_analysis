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

void main()
{
	char str[20][10]={'\0'},substr[20][3];
	int i=0,j,max,k;
	while(scanf("%s%s",str[i],substr[i])!=EOF)
		i++;
	for(i=0;str[i][0]!='\0';i++)
	{
		k=0;
		max=str[i][0];
		for(j=0;str[i][j]!='\0';j++)
		{
			if(str[i][j]>max)
			{
				max=str[i][j];
				k=j;
			}
		}
		for(j=0;j<=k;j++)
			printf("%c",str[i][j]);
		for(j=0;j<3;j++)
			printf("%c",substr[i][j]);
		for(j=k+1;str[i][j]!='\0';j++)
			printf("%c",str[i][j]);
		printf("\n");
	}
}