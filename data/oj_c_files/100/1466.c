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
	char store[300],letr[53];
	int i,j,f=0,l;
	gets(store);
	for(j=0;j<26;j++)
	{
		letr[j]='A'+j;
	}
	for(;j<52;j++)
	{
		letr[j]='a'+j-26;
	}
	for(j=0;j<52;j++)
	{
		l=0;
		for(i=0;store[i]!=0;i++)
		{
			if(store[i]==letr[j])
			{
				l++;
				f=1;
			}
		}
		if(l!=0)
			printf("%c=%d\n",letr[j],l);
	}
	if(f==0)
		printf("No");
}
