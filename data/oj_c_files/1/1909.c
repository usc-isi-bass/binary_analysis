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

int num(int a,int b);
int main()
{
	int t;
	int a;
	cin>>t;
	for(int i=1;i<=t;i++)            //??
	{
		cin>>a;                      //????
		cout<<(num(a,2))<<endl;      //????
	}
	return 0;
}
int num(int a,int b)
{
	int f=0;
	if(a>=b)                    //????????????
	{
	for(int i=b;i<=a;i++)       //????
	{
			if(a==i) f++;
			else if(a%i==0) f=f+num(a/i,i);     //???????????
	}
	}
	return f;
}