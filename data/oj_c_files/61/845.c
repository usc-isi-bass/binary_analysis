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
     int n,m;
     int i,j,k;
     int a[100];
     scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i-1]);
    int b[100];
    b[1]=1;
    b[0]=1;
    for(i=2;i<=22;i++)
      b[i]=b[i-1]+b[i-2];
      for(i=0;i<n;i++)
      {
         m=a[i];
         printf("%d\n",b[m-1]);
         }             
     getchar();
     getchar();
     getchar();
     getchar();
     getchar();
 
} 