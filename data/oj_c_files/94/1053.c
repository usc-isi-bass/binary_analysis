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

	int N,a[500],t=0,i=0,j=0,k=0,x,y;
int main( )
{

	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>x;
		if(x%2==1) 
		{
		    a[t]=x;   //????
		    t++;
		}
	}
	for(j=0;j<t;j++)         //????
		for(k=0;k<t-j-1;k++)
		{
			if(a[k]>a[k+1])
			{
				y=a[k];
				a[k]=a[k+1];
				a[k+1]=y;
			}
		}
	for(k=0;k<t-1;k++)cout<<a[k]<<",";
	cout<<a[k];
	return 0;
}
