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



int factor(int a,int min)
{
	int count=0;
	for(int i=min;i<=a;i++)
	{
		if(i==a)
		{
			count+=1;
		}
		if(a%i==0)
		{
			count+=factor(a/i,i);
		}
	}
	return count;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
		int result=factor(a,2);
		cout<<result<<endl;
	}
	return 0;
}
