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
{ int i,n,max ;
  max=0;
  scanf("%d",&n);
  int a[n],b[n],c[n];
  for (i=0;i<=n-1;i++)
   { scanf("%d%d\n",&a[i],&b[i]);
     if (90<=a[i] && a[i]<=140 && 60<=b[i] && b[i]<=90) 
	   if (i==0)  
		   c[i]=1;
	   else  c[i]=c[i-1]+1;
	 
	 else  c[i]=0;
	 if (c[i]>max)  
	   max=c[i];
   }
  printf("%d",max);
}