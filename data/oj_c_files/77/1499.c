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


int function(char* a,int m,char k)//??a[m]?'('
{
	int t=m;
	while(a[t+1]!=0)
	{
		if(a[t+1]!=k)
		{
			cout<<m<<' '<<t+1<<endl;
			return t+1;
		}
		else
		{
			t=function(a,t+1,k);
		}
	}
}

int main()
{
	char a[101],k;
	cin>>a;
	int n=-1;
	k=a[0];
	while(a[n+1]!=0)
	{
		n=function(a,n+1,k);
	}
	return 0;
}