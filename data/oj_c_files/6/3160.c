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
 	int b,c,d=0,e=0,i,j,k,l,m,n;
 	int a[101][101]={0};
	cin>>k;
 	for (i=1;i<=k;i++)
 	{
		cin>>m>>n;
		for (b=1;b<=m;b++)
		{
		 	for (c=1;c<=n;c++)
		 	{
			 	cin>>a[b][c];d=d+a[b][c];
			}
		}
	 	for (b=2;b<=m-1;b++)
	 	{
		 	for (c=2;c<=n-1;c++)
		 	{
			 	e=e+a[b][c];
			}
		}
	cout<<d-e<<endl;
	d=0;
	e=0;
	}


}	 
