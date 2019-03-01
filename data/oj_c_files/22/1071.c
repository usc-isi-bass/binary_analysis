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
	int i,n,a[300],c[300],max=0,j=0;
	char b[300];
	for(i=0;;i++)
	{
	  scanf("%d%c",&a[i],&b[i]);
	  if(b[i]!=',') break;
	}
	n=i+1;
	if(n==1)   printf("No");
	else
	{
	   for(i=0;i<n;i++)	
	   {
	   	  if(a[i]>max)  max=a[i];
	   }
	   for(i=0;i<n;i++)
	   {
	   	if(a[i]<max)   {c[j]=a[i];j++;}
	   }
	   if(j==0)   printf("No");
	   else 
	   {
	   	max=0;
	   	for(i=0;i<j;i++)
	   	{
	   		if(c[i]>max)    max=c[i];
	   	}
	   	printf("%d",max);
	   }
	} 
	return 0;
}