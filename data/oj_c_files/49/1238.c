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
	char a[520],b[520]={0};
	int length,i,j,k;
	int hui(char b[]);
	gets(a);
	length=strlen(a);
	for(i=2;i<=length;i++)
	{
		for(j=0;j<=length-i;j++)
		{
			for(k=0;k<i;k++)
			{
				b[k]=a[j+k];
			}
			if(hui(b)==1)
			{
				printf("%s\n",b);
			}
			else continue;
		}
	}
	return 0;
}
int hui(char b[])
{
	int i;
	for(i=0;i<strlen(b);i++)
	{
		if(b[strlen(b)-1-i]!=b[i])
		{
			break;
		}
	}
	if(i==strlen(b)) return 1;
	else return 0;
}