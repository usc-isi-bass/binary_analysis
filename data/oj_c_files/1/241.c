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

int means(int,int);
int main()
{
	int n,i=0;
	cin>>n;
	while(i<n)
	{
		int a;
		cin>>a;
		cout<<means(a,a)<<endl;
		i++;
	}
	return 0;
}



int means(int a,int b)
{
	int i,sum=0;
	if(a!=1)
	{
		for(i=b;i>=2;i--)
		{
			if(a%i==0)
			{
				sum=sum+means(a/i,i);              //?i????a??????a/i???a/i??????i????????????
			}
		}
		return sum;                  //?????a???????????
	}
	else
	{
		return 1;                       //?a=1?????????1
	}
}