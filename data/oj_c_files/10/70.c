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


int n;
int height[25];

int stop(int k);
int main()
{

	cin>>n;
	int i,MAX=0;   
	for(i=0;i<n;i++)
		cin>>height[i];
	for(i=0;i<n;i++)
	{
		if(MAX<stop(i))
			MAX=stop(i);
	}
	cout<<MAX;
	return 0;
}

int stop(int k)
{
	int j,max=0;
	for(j=k+1;j<n;j++)
	{
		if(height[j]<=height[k])
		{if(max<stop(j))
			max=stop(j);
		}
	}
	return max+1;
}
