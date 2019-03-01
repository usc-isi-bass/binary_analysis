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

int begin=2;
int main()
{
	int f(int);
	int n=0,x=0,i=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		cout<<f(x)+1<<endl;
	}
	return 0;
}
int f(int x)
{
	int i=0;
	int left=0;
	int num=0;
	for(i=begin;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			num++;
			left=x/i;
			begin=i;
			num+=f(left);
		}
	}
	//if(num!=0)
	    begin=2;
	    return num;
	//else
		//return 0;
}
