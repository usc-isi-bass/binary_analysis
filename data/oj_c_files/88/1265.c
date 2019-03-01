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

int detc(char m)
{
	if(m>=48&&m<=57)return 1;
	else return 0;
}
int main()
{
	char c[30];
	int i,j,k;
	int m,n;
	cin.getline(c,31,'\n');
    n=strlen(c);
	for(i=0;i<=n-1;i++)
	{
		if((i==0&&detc(c[i])==1)||i!=0&&detc(c[i])&&!detc(c[i-1]))
		{
			for(j=0;detc(c[i+j])==1;j++)
			{cout<<c[i+j];}
			cout<<endl<<endl;
		}
	}
	return 0;
}
