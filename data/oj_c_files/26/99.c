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
	char a[100];//????????...
	cin.getline(a,101);
	int na,i,j;
	for(i=0;i<=100;i++)//??????????
	{
		if(a[i]=='\0')
		{
			na=i;
		}
	}
	for(i=0;i<=na;i++)//??????...
	{
		if(a[i]==' ' && a[i+1]==' ')
		{
			for(j=i;j<=na-1;j++)
			{
				a[j]=a[j+1];
			}
			na=na-1;
			i=i-1;

		}
	}

	cout << a;
	return 0;
}
		
