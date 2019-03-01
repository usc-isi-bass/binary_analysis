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

int a[101],b[101];//b??????
int n;
void f(int i)
{
	int j;
	if(i==n)
		return;
	else
	{

		for(j=0;j<101;j++)
			b[j]=0;
		for(j=100;j>=0;j--)
		{
			a[j]=a[j]*2+b[j];//????
			if(a[j]>=10)
				{a[j]=a[j]-10;
			b[j-1]=1;}
		}
		f(i+1);
	}
}
int main()
{
	cin>>n;
	a[100]=1;
	f(0);
	int i;
	for(i=0; ;i++)
	{
		if(a[i]!=0)
			break;
	}
	for(i;i<=100;i++)
		cout<<a[i];
}