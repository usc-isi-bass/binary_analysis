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
     int a[100000],b[100000],c[100000]={0},n,i,j,k,s=0;
     scanf("%d",&n);
     for(i=0;;i++)
     {
           scanf("%d",&a[i]);
           scanf("%d",&b[i]);
           if (a[i]==0&&b[i]==0)
           break;
     }
     for(j=0;j<i;j++)
     c[b[j]]=c[b[j]]+1;
     for(k=0;k<n;k++)
     if (c[k]==n-1)
     {
        s++;
        printf("%d",k);
     }
     if(s==0)
     printf("NOT FOUND");
}
     