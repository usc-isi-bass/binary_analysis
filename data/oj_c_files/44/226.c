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

int fanxu(int x);                       //????
int main()
{
	int i,num[6];
	for(i=0;i<6;i++)
	{
		cin>>num[i];
	}
	for(i=0;i<6;i++)
	{
		cout<<fanxu(num[i])<<endl;      //??????
	}
	return 0;
}
int fanxu(int x)
{
	int y=0,i=0,j,a[10],temp;
	while(x!=0)                        //????????????
	{
		a[i]=x%10;
		x=x/10;
		i++;
	}
	for(j=0;j<i;j++)                   //??????????
	{
		y=10*y+a[j];
	}
	return y;
}
