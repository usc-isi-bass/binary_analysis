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
	char str[50*100], word[50][100];
	int i,j,k,max,min,max1=0,min1=0;

	gets(str);

	for(i=0,k=0,j=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			word[k][j]='\0';
			k++;
			j=0;
			continue;
		}
		word[k][j]=str[i];
		j++;
	}
	word[k][j]='\0';

	max=(int)strlen(word[0]);
	min=(int)strlen(word[0]);

	for(i=0;i<=k;i++)
	{
		if(max<(int)strlen(word[i]))
		{
			max=(int)strlen(word[i]);
			max1=i;
		}
		if(min>(int)strlen(word[i]))
		{
			min=(int)strlen(word[i]);
			min1=i;
		}
	}

	printf("%s\n",word[max1]);
	printf("%s\n",word[min1]);

	return 0;
}
