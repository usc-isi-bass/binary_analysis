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
   int i,a[10000],n;
   scanf("%d",&i);
   
   if(i==1) printf("End\n");
   else {
        for(n=2;;n++)
        {
                a[1]=i;
                   if (a[n-1]%2==1) {a[n]=a[n-1]*3+1 ;printf("%d*3+1=%d\n",a[n-1],a[n]);}
                   else if(a[n-1]%2==0) {a[n]=a[n-1]/2;printf("%d/2=%d\n",a[n-1],a[n]);}
                 if (a[n]==1) { printf("End\n"); break;}
                   }}
                
                   
                   }