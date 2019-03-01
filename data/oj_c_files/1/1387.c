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

int sum=0,t;          //sum?????????,t??????
void dg(int s)        //?s????
{
	for(int i=s;i<=t;i++)
	{
		if(t%i==0)   //?i??t??
		{
			t=t/i;
			if(t==1) sum++;   //t????,??+1
			else dg(i);       //??????
			t=t*i;
		}
	}
}
int main()
{
	int n;
	cin>>n;
	while(n--)       //??n?
	{
		cin>>t;
		dg(2);
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}