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

main()
{
   int n,a[100000],m,i,j,*p,s=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",a+i);
   scanf("%d",&m);
   for(i=0;i<n-s;i++)
   {   if(*(a+i)==m)
       {   for(j=i;j<n-s;j++)
	    *(a+j)=*(a+j+1);
	   s++;
	   i--;
       }
   }
   for(i=0;i<n-s-1;i++)printf("%d ",*(a+i));
   printf("%d",*(a+i));
}