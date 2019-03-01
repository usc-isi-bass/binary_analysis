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
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int year,mon1,mon2,sum=0;
		int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
		cin>>year>>mon1>>mon2;
		if((year%4==0&&year%100!=0)||year%400==0)
			a[2]=29;
		if(mon1>mon2)
		{
			int t;
			t=mon1;
			mon1=mon2;
			mon2=t;
		}
		for(int i=mon1;i<mon2;i++)
			sum=sum+a[i];
		if(sum%7==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}