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
	char word[50][100],input[5000];
	gets(input);
	int i,k=0,j=0,a=0,b=0;
	int n=strlen(input);
	for(i=0;i<n;i++)
	{
		if(input[i]==' ')
		{
			word[k][j]='\0';
			k++;
			j=0;
			continue;
		}
		word[k][j]=input[i];
		j++;
	}
	word[k][j]='\0';
	int max=strlen(word[0]);
	int min=strlen(word[0]);
	for(i=1;i<=k;i++)
	{
		if((int)strlen(word[i])>max)
		{
			max=(int)strlen(word[i]);
			a=i;
		}
	}
	for(i=1;i<=k;i++)
	{
		if((int)strlen(word[i])<min)
		{
			min=(int)strlen(word[i]);
			b=i;
		}
	}
	printf("%s\n",word[a]);
	printf("%s\n",word[b]);
	return 0;
}
