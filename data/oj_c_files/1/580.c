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

int j;
int discharge(int x,int y)
{
	int a=1;
	for(int i=y;i<=(sqrt((double)x));i++)
	{
		if(x%i==0)
		{
			a=a+discharge(x/i,i);
		}
	}
	return a;
}
int main()
{
	int n,x,r[100];
	cin>>n;
	for(j=0;j<n;j++)
	{
		cin>>x;
		r[j]=discharge(x,2);
	}
	for(j=0;j<n-1;j++)
	{
		cout<<r[j]<<endl;
	}
	cout<<r[n-1];
	return 0;
}