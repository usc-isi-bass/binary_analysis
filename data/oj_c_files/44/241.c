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

int reverse(int num)
{
	int a1=0,p=0,sign=0;
	int i,j=1,k=1,temp;
	if(num<0)                       //?????
	{
		sign=1;
		num=-num;
	}
	for(i=0;i<20;i++)               //????
	{
		if(num/j==0)break;
		else
		{
			p++;
			j=j*10;
		}
	}
	j=1;
	for(i=1;i<p;i++)                //j?1?k?10?p????
		k=k*10;
	for(i=0;i<p;i++)                //????????????
	{
		a1=a1+num/k*j;
		temp=num/k;
		num=num-temp*k;
		j=j*10;
		k=k/10;
	}
	if(sign==1)                     //?????
		a1=-a1;
	return a1;
}
int main()
{
	int a[6];
	int i;
	for(i=0;i<6;i++)
		cin>>a[i];
	for(i=0;i<6;i++)               //??????
		cout<<reverse(a[i])<<endl;
	return 0;
}