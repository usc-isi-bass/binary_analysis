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



int i,n,m,j,k;
int p,q,r;
int t[99];

int main()
{
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin>>m;
		r=0;
		for (j=1;j<=90;j++) t[j]=1;
		for (j=1;j<=m;j++)
		{
			cin>>p;
			q=0;k=1;
			do
			{
				q=q+t[k];
				k++;
			}
			while (q!=p);
			t[k]=0;k++;
			t[k]=0;k++;
			t[k]=0;
		}
		for (j=1;j<=60;j++) r=r+t[j];
		cout<<r<<endl;
	}
	return 0;
}
 