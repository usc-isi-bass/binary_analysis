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

int fenjie(int ,int );
int main()
{
	int i,n,t,r,num;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>num;
		r=fenjie(num,2);
		cout<<r<<endl;
	}
	return 0;
}
int fenjie(int num,int min)
{
	int i,j,k,r=0;
	for(i=min;i<=num;i++)
	{
		if(num%i==0)
		{
			r=r+fenjie(num/i,i);
		}
		if(i==num) r++;
	}
	return r;
}