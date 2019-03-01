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
	int f(int x, int y);
	int n,m,i,z;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		z=f(1,m);
		printf("%d\n",z);
	}
	
	return 0;
}

int f(int x, int y)
{
	int z,t=1,l=0,p;
	p=(int) pow(y,0.5);
	if(x==1) x=2;
	for(z=x;z<=p;z++)
	{		
		if(y%z==0 && z!=y)
		{
			t+=f(z,y/z);
		}	
	}

	return t;
}