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
   int n,k,i,j;
   int a[1000]={0};
   cin>>n>>k;
   for (i=1;i<=n;i++)
	{
	   cin>>a[i];
	}
   for (i=1;i<n;i++)
	{
	j=i;
	while (j<=n)
		{
		if (a[i]+a[j]==k)
			{
		cout<<"yes";
		return 0;
			}
		j++;
		}
	}
	cout<<"no"; 
	return 0;
}

