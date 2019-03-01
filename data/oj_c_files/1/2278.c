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


int f(int,int);
int main()
{
	int N;
	cin>>N;
	int i;
	for(i=1;i<=N;i++)
	{
		
		int a;
		cin>>a;
		cout<<f(a,2)<<endl;
	}
	return 0;
}
int f(int n,int m)
{
	int j;
	int number=1;
	for(j=m;j<=(int)sqrt(n);j++)
	{
		if(n%j==0)
		{
			number=number+f(n/j,j);
		}
	}
	return number;
}
		