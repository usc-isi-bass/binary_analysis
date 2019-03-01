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
 long n,i,j,f,s=0;
 scanf("%d",&n);
 for (i=1;i<=n;i++)
   if (i%7!=0)
     {
     f=1;
     for (j=i;j!=0;)
       {
       if (j%10==7)
	 {
	 f=0;break;
	 };
       j=j/10;
       };
     if (f==1)
       s=s+i*i;
     };
   printf("%ld\n",s);
 }