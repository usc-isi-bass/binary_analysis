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
	int a[500],b[500],n,k,i,j=0,e;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{ scanf("%d",&a[i]);}
		for(i=0;i<n;i++)
		{
			if ((a[i])%2!=0)
			{
				b[j]=a[i],j++;
			}
		}

      for(k=1;k<n;k++)
	  {
		for(i=0;i<j-k;i++)
		{
			if(b[i]>b[i+1])
			{
				e=b[i+1],b[i+1]=b[i],b[i]=e;
			}
		}
	  }
	  for(i=0;i<j;i++)
	  {
		  printf("%d",b[i]);
		  if(i<j-1)
		  {
			  printf(",");
		  }
	  }
	return 0;
}