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
   int i,j,n;
   
   int a[30]={1},b[20];
  
    a[1]=a[0];
   for(i=2;i<30;i++)    
    a[i]=a[i-2]+a[i-1];
   scanf ("%d",&n);
   for(j=0;j<n;j++)
      scanf("%d",&b[j]);
     for(j=0;j<n;j++)
    printf("%d\n",a[b[j]-1]);       
   getchar(); getchar(); getchar();
}
