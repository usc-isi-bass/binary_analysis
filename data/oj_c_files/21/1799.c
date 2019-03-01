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
   int n,i=0,sum=0,t,j;
   double max=0;
   double aver;
   int a[300];
   double b[300];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	   scanf("%d",&a[i]);
	   sum=sum+a[i];
   }
   aver=(double)sum/n;
   

   for(i=0;i<n;i++)
   { 
	   b[i]=fabs((a[i]-aver));
	   if(b[i]>=max) max=b[i];
   }
   for(i=0;i<n;i++)
   {
	   if(b[i]==max) 
	   {
		   printf("%d",a[i]);
           t=i;
		   break;
	   }
   }
   for(i=t+1;i<n;i++)
   {
	   if(b[i]==max) 
	   {
		   printf(",%d",a[i]);
	   }
   }
   return 0;
}