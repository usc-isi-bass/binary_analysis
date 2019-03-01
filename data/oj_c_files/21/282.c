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
	int n,a[1000]={0},i,sum=0,j,b[1000]={0},temp,t;
	float ave; 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	ave=(float)sum/n;
	if(ave-(int)ave>=0.5)
		t=(int)ave+1;
	else
		t=(int)ave;


	for(i=0;i<n;i++)
	{
		b[i]=fabs(t-a[i]);
	}
	for(i=0;i<n;i++)
		 for(j=0;j<n-i;j++)
		    if(b[j]<b[j+1])
			{
			  temp=b[j];
			  b[j]=b[j+1];
			  b[j+1]=temp;
			  temp=a[j];
			  a[j]=a[j+1];
			  a[j+1]=temp;


			}
	for(i=0;i<n;i++)
	{
		if(b[i+1]!=b[i])
		{
			printf("%d",a[i]);
			break;
		}
		else
			printf("%d,",a[i]);

		
	}
	return 0;
}

	

	

