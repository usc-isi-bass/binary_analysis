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
	char s[100],a[100][30];
	int i,j,k;
	gets(s);
	for(i=0,j=0,k=0;i<100&&s[i]!=0;i++)
	{
		if(s[i]==' ')
		{
			a[j][k]=0;
			j++;
			k=0;
		}
		else
		{
			a[j][k]=s[i];
			k++;
		}
		a[j][k]=0;
	}
	for(i=j;i>0;i--)
	{
		for(k=0;k<30&&a[i][k]!=0;k++)
		{
			printf("%c",a[i][k]);
		}
		printf(" ");
	}
	for(k=0;k<30&&a[0][k]!=0;k++)
	{
		printf("%c",a[0][k]);
	}
}
