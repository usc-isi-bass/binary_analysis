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
	char c[500];
	scanf("%s",&c);
	int i,j,k,l;
	for(i=2;i<=strlen(c);i++)
	{
		for(j=0;j+i-1<strlen(c);j++)
		{
			char s1[500]={'\0'},s2[500]={'\0'};
			for(k=j;k<=j+i-1;k++)
			{
				s1[k-j]=c[k];
			}
			for(l=0;l<i;l++)
			{
				s2[l]=s1[i-l-1];
			}
			if(strcmp(s1,s2)==0)
				printf("%s\n",s1);
		}
	}
}