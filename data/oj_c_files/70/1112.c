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
	int n,i,j,k;//????
	double a[100]={0},t=0,d;//????
	cin>>n;//????n
	for(i=1;i<=2*n;i++)
		cin>>a[i];//??????
	for(j=1;j<=n;j++)
	{
		for(k=j+1;k<=n;k++)
		{
			d=sqrt((a[2*j-1]-a[2*k-1])*(a[2*j-1]-a[2*k-1])+(a[2*j]-a[2*k])*(a[2*j]-a[2*k]));//??????????
		    if(d>t)t=d;//??d>t,t=d
		}
	}
	cout<<fixed<<setprecision(4)<<t<<endl;//??t
	return 0;
}