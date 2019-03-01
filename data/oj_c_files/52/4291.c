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
	int a[40],i,k,j=0,n,m,temp;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=n-m;i<=n-1;i++)
	{
		for(k=i;k>j;k--)
		{	
			temp=a[k];a[k]=a[k-1];a[k-1]=temp; 
		}
		j+=1;
	}
	cout<<a[0];
	for(i=1;i<n;i++)
		cout<<' '<<a[i];
		return 0;
}
