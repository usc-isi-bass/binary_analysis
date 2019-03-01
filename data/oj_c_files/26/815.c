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
	char a[100];
	int t;
	int g;
	gets(a);
	int i=0;
	int temp=0;
	while(a[i]!=0)
	{
		i++;
	}
	g=i-1;
	while(a[g]==' ')
	{
		i--;
		g--;
	}
	a[i]=0;
	i=0;

	while(a[i]!=0)
	{
		
		if(a[i]==' ')
		{
			  if(temp==0)
				cout<<a[i];
			temp=1;
		}
		else
		{
			cout<<a[i];
			temp=0;
		}
		i++;

	}
	return 0;
}