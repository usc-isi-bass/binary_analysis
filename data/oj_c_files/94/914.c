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
    int n,a[500],b,c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				b=a[i];a[i]=a[j];a[j]=b;
			}
		}
	}
         for(int i=n-1;i>=0;i--)
         {
                  if(a[i]%2!=0){c=i;break;}
         }
	for(int i=0;i<n;i++)
	{
                  if(i==c) {cout<<a[i];break;}
		if (a[i]%2!=0) cout<<a[i]<<",";
	}
	return 0;
}