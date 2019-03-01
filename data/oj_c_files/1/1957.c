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


int sum(int a,int i)
{
	int ret=1;
	for(;i<=sqrt((float)a);i++)
	{
		if(a%i==0)
		{
			ret+=sum(a/i,i);
		}
	}
	return ret;
}
int main()
{
	int t,a,j;
	cin>>t;
	
	for(j=0;j<t;j++)
	{
		cin>>a;
		cout<<sum(a,2)<<endl;
	}
	return 0;
}