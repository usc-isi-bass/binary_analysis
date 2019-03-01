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
	int a=0,i,j,k,l;
	char *p=NULL;
	char b[50];
	p=b;
	cin.get(b,50);
	l=strlen(b);
	for(i=0;i<l;i++)
	{
		if(*(p+i)>'0'&&*(p+i)<='9')
		{
			cout<<*(p+i);
			a=1;
		}
		if((*(p+i)<'0'||*(p+i)>'9')&&a==1)
		{
			cout<<endl;
			a=0;
		}
		if(*(p+i)=='0')
		{
			if(a==1)
				{cout<<*(p+i);}
			else
			{
				if(a==0&&(*(p+i+1)<'0'||*(p+i+1)>'9'))
				{cout<<*(p+i);a=1;}
			}
		}
	}
}