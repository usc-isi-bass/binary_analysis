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

int num=0;
int judge1(int n)
{
	int i;
	if(n==2||n==3||n==5)
		return 1;
	if(n==4)
		return 0;
	for(i=2;i*i<n;i++)
	{
		if(n%i==0)
		{return 0;break;}
	}
	if(i*i>n)
		return 1;
}
void divide(int n,int d)
{
	for(int i=d;i*i<=n;i++)
	{
		if(n%i==0)//&&judge1(i))
		{
			num++;
			divide(n/i,d);
		}
		d++;
	}
}
int main()
{
	int n,m;
	cin>>n;
	while(n)
	{
		n--;
		cin>>m;
		num=1;
		divide(m,2);
		cout<<num<<endl;
	}
	return 0;
}