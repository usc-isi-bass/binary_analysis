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
   int n,m,i,j,k;
   scanf("%d\n",&n);
   int a[n],b[n];
   k=0;
   for(i=0;i<n;i++){scanf("%d ",&a[i]);}
   for(i=n-1;i>0;i--)
     {
       m=0;
       for(j=i-1;j>=0;j--){if(a[i]!=a[j]) m=m+1;}
	   if(m==i){b[k]=a[i];k=k+1;}
      	  
   }
   b[k]=a[0];
   for(i=k;i>0;i--)printf("%d ",b[i]);
   printf("%d",b[0]);
}

