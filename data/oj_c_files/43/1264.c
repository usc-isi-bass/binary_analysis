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

//*******************************
//* Name:Goldbach
//* Author:Sun Zeyu
//* Editting time:2013.10.17
//* Function:Goldbach
//*******************************
int main()
{
	int m,x,a[2000]={0},i,k=0,j;
	cin>>m;
	for(x=3;x<m;x++)
	{
		for(i=2;i<=x/2;i++)
			if(x%i==0)
				break;
		if(i>x/2)
		{
			a[k]=x;
			k++;
		}
	}
	for(i=0;i<k-1;i++)
		for(j=i;j<k;j++)
			if(a[i]+a[j]==m)
				cout<<a[i]<<' '<<a[j]<<endl;
	return 0;
}
