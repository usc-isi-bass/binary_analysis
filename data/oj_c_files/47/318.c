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
 int a[100],b[100],n,i,j,f=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
     b[n-i-1]=a[i];
 }
 for(i=0;i<n;i++)
 {
     if(f==0)
     {
         printf("%d",b[i]);
         f=1;
     }
     else
     {
         printf(" %d",b[i]);
     }
 }
 printf("\n");
 return 0;
}
