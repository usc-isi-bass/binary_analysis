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
	int n=0,k=0;//????
	cin>>n>>k;
	int a[1000];//????
	int i=0;//????
	int c=0;//??????
	for(i=0;i<n;i++)//????
	{
		cin>>a[i];
	}
	int b=0;//?i??????
	for(i=0;i<n&&c!=250;i++)
	{
		for(b=0;b<n-i&&c!=250;b++)
		{
			if(k==a[i]+a[i+b])
			{
				cout<<"yes"<<endl;
				c=250;
			}
		}
	}
	if(c==0)
		cout<<"no"<<endl;
	return 0;
}
