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
   int input[100]={0},i=0,j=0,n=0,t=0;
   scanf("%d",&n);
   for(i=0;i<n;i++) scanf("%d",&input[i]);


   for(i=1;i<n;i++)
   {
      if(input[i]<input[i-1])
      {
	 t=input[i];
	 input[i]=input[i-1];
	 input[i-1]=t;
      }
   }
   printf("%d\n",input[n-1]);
   input[j]=0;

   for(i=1;i<n-1;i++)
   {
      if(input[i]<input[i-1])
      {
	 t=input[i];
	 input[i]=input[i-1];
	 input[i-1]=t;
      }
   }
   printf("%d\n",input[n-2]);
}
