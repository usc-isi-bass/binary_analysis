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

int temp=2,sum=0;
void dg(int x)
{
	for(int i=temp; i<=x; i++)
	{
		if(x%i==0)
		{
			temp=i;
			if(x/i==1) 
			{
				sum++;
				temp=2;
			}
			else dg(x/i);
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int x;
	for(int i=0;i<n;i++)
	{ 
		cin>>x;
		dg(x);
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}