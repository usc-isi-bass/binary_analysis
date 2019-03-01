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
	int n,i,j,k;
	int a[50]={1},b[50]={0};
	cin>>n;
	for(j=1;j<=n;j++)
	{
		for(i=0;i<=31;i++)
		{
			if(a[i]*2<10)
			{
				a[i]=a[i]*2+b[i];
				b[i+1]=0;
			}
			else
			{
				a[i]=a[i]*2-10+b[i];
				b[i+1]=1;
			}
		}
	}
         for(i=31;i>=0;i--)
		 {
			 if(a[i]!=0)
				{ 
					k=i;
					break;
				}
		 }
		 for(i=k;i>=0;i--)
			 cout<<a[i];
		
}
