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


char a[1000][41];
int n;

void y(int b)
{
	int i;
	int x=0;
	for(i=b;;i++)
	{
		x=x+strlen(a[i]);
		if(x==80)
		{
			cout<<a[i]<<endl;
			if(i==n-1) break;
			y(i+1);
		}
		if(x+1<=80)
		{
			if(x+1+strlen(a[i+1])<=80)
			{
				if(i<n-1)
				{
					x=x+1;
					cout<<a[i]<<" ";
					continue;
				}
				if(i==n-1) 
				{
					cout<<a[i]<<endl;
					exit(1);
				}
			}
			if(x+1+strlen(a[i+1])>80)
			{
				cout<<a[i]<<endl;
				if(i==n-1) break;
				y(i+1);
			}
		}
	}
}

int main()
{
	int p;
	cin>>n;
	for(p=0;p<n;p++)
	{
		cin>>a[p];
	}
	y(0);
	return 0;
}
