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

// ?????.cpp : Defines the entry point for the console application.
// ??????????????????????????????main???????????????
int reverse(int num)                  //????reverse?????????????????????
{
	int a[20];
	int i=0,j=0;                      //????
	if(num>0)                         //??????????????
	{
		while(num>0)
		{
			a[i]=num%10;
			num=num/10;
			i++;
		}
		for(j=0;j<i;j++)
		{
			num=num*10+a[j];
		}
	}
	else                               //???????????????
	{
		num=num*(-1);
		while(num>0)
		{
			a[i]=num%10;
			num=num/10;
			i++;
		}
		for(j=0;j<i;j++)
		{
			num=num*10+a[j];
		}
		num=num*(-1);
	}
	return num;
}
int main()                          //?????
{
	int num[6],fan[6];
	int i=0;
	for(i=0;i<6;i++)                     //??6??
	{
		cin>>num[i];
	}
	for(i=0;i<6;i++)                       //?fan[i]???num[i]????
	{
		fan[i]=reverse(num[i]);
	}
	for(i=0;i<5;i++)                          //??
	{
		cout<<fan[i]<<endl;
	}
	cout<<fan[5];
	return 0;
}