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

int main(int argc, char* argv[])
{  int i,j,n,k;
   int m=0;
	int a[1000];   
   scanf("%d",&n);
   scanf("%d",&k);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {for(j=i+1;j<n;j++)
   {
	   if(a[i]+a[j]==k)
       m++;
   }
   }
   if(m!=0)
	   printf("yes");
   if(m==0)
	   printf("no");
   return 0;
}

