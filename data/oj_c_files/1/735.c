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

//******************************************************************************
//??? ??????????????                                          *
//????wayne                                                                *
//?????11.23                                                              *
//******************************************************************************
int sum=1,j=2;                     //?????????????????
void num(int);                     //??????
int main()                         //?????
{
	int n,a[100];
	int i;
	cin>>n;
	for (i=1;i<=n;i++)             //????n?????
	{
		cin>>a[i];
		num(a[i]);                 //????
		cout<<sum<<endl;
		sum=1,j=2;                 //????????????????
	}
	return 0;
}
void num(int a)                    //????
{
	int k;
	for (k=j;k<=sqrt(a);k++)       //k=j?????????????????
	{ 
		if (a%k==0)                //???????             
		{
			sum=sum+1;             //?????
			j=k;                   //???????
			num(a/k);              //????
		}
	}
}