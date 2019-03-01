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
   int n;
   int a[10000],b[10000];
   int i,c=10000,d=1;
   double k;
   scanf("%d",&n);
   for(i=0;i<n;i++){
	   scanf("%d %d",&a[i],&b[i]);}
   for(i=0;i<n;i++)
   {
	   if(a[i]<=c)
	   {
		   c=a[i];
	   }
   }
	   for(i=0;i<n;i++)
	   {
		   if(b[i]>=d)
		   {
			   d=b[i];
		   }
	   }
	   //printf("%d %d\n",c,d);
		   for(k=c;k<d;k=k+0.5)
		   {
			 //printf("%f:",k);
		      for(i=0;i<n;i++)
			  {
			   if(a[i]<=k&&k<=b[i])
			   {
                  //printf("%d\n",i);                  
				  break;
			   }
			  }
			  if(i==n)
				   break;
		   }
		   if(k==d){
			   printf("%d %d",c,d);
		   }
		   else {
			   printf("no");
		   }
		   return 0;
	   }

                       