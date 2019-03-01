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
   int a[300]; 
   int n,i,j,k,l;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(j=0;j<n;j++) 
   for(k=j+1;k<n;k++)
   if(*(a+j)==*(a+k)) 
   *(a+k)=0; 
   printf("%d",*a);
   for(l=1;l<n;l++) 
   if(*(a+l)!=0) 
   printf(",%d",*(a+l));
}