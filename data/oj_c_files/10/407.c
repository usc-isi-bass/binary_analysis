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
	int k,a[30],b[30],sum,i,j,m,p=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	scanf("%d",&a[i]);
	b[k-1]=1;
	for(i=k-1;i>0;i--)
	{
		if(a[i-1]>=a[i])b[i-1]=b[i]+1;
		else break;
	}
	for(j=i-1;j>=0;j--)
	{
		sum=b[k-1];
	   for(m=k-1;m>j;m--)
	  {
	      if(a[j]>=a[m]&&b[m]>=sum)
		   sum=b[m],p++;
	   }
	   if(p==0)b[j]=1;
	   else
	   {
	      b[j]=sum+1; 
	   }
	}
	sum=0;
	for(i=0;i<k;i++)
	{
		if(b[i]>sum)sum=b[i];
	}
	printf("%d",sum);
}