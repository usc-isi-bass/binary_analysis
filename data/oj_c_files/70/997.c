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
	int n,i,j;
	double dis=0,x[100],y[100],temp;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n;j++)
		{
			temp=sqrt(pow(x[i]-x[j],2.0)+pow(y[i]-y[j],2.0));
			if(temp>dis)
			{
				dis=temp;
			}
		}
	}
    printf("%.4f\n", dis);
	return 0;
}