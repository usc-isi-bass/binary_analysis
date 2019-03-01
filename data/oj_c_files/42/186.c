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

void main()
{
   int i,n,j,k,a[100000];
   int num[100000];
   scanf("%d",&n);
  
   for(i=0;i<n;i++)
   {
       scanf("%d ",&num[i]);
   }
    scanf("%d",&k);
   for(i=0;i<n;)
   {
	   if(num[i]==k)
	   {  
		   for(j=i;j<n-1;j++){num[j]=num[j+1];}
		   n--;
	   }else i++;
   }
   for(i=0;i<n-1;i++)
   {
	   printf("%d ",num[i]);
   }
   printf("%d",num[n-1]);
}