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
	int a[100],b[100],n,i,j,p,q,d,x,y[100],k,s;
	d=0;
	scanf("%d\n",&n);
	for(i=0,j=0;i<n;i++,j++)
	{
		scanf("%d%d",&a[i],&b[j]);
	}
	for(p=0;p<n;p++)
	{
		for(i=n-1,j=n-1;i>p;i--,j--)
		{
			if(a[i]<a[i-1])
			{
				q=a[i];       
				a[i]=a[i-1];
				a[i-1]=q;
				s=b[j];
				b[j]=b[j-1];
				b[j-1]=s;
			}
		}
	}
	for(i=0,j=0,k=0;i<n-1;i++,j++,k++)
	{
		y[0]=b[0];
		if(y[k]>=a[i+1]&&y[k]>=b[j+1])
		{
			x=a[0];
			y[k+1]=y[k];
		}else if(y[k]>=a[i+1]&&y[k]<b[j+1])
		{
			x=a[0];
			y[k+1]=b[j+1];
		}	
		if(y[k]<a[i+1])
		{
			printf("no");
			return 0;
		}
	}
	printf("%d %d",x,y[n-1]);
	return 0;
}
