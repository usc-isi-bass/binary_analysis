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

int main()
{
	int n,i,j,year,m1,m2,t,m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>year>>m1>>m2;
		t=0;
        if(m1>m2)
			{m=m1;m1=m2;m2=m;}
		if((year%4==0&&year%100!=0)||(year%400==0))
		{
			int a[12]={0,31,29,31,30,31,30,31,31,30,31,30};
			for(j=m1;j<m2;j++)
			{t=t+a[j];}
			if(t%7==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else
		{
			int a[12]={0,31,28,31,30,31,30,31,31,30,31,30};
			for(j=m1;j<m2;j++)
			{t=t+a[j];}
			if(t%7==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}