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
    int a[100],N,i,j,temp;
    scanf("%d\n", &N);
    for(i=1;i<=N;i++)
        scanf("%d\n", &a[i]);   
    for(i=1;i<=N;i++)
          { 
            for(j=i+1;j<=N;j++)
            if (a[j]<a[i])
               {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
                 }
           }
     printf("%d\n%d\n",a[N],a[N-1]);
}

