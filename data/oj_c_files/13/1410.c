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
{int a[20002]={1},n,i,j,k;
scanf("%d",&n);
scanf("%d",&a[1]);
printf("%d",a[1]);
 for(i=2;i<=n;i++)
 { scanf("%d",&a[i]);
    k=0;
   for(j=i-1;j>0;j--)
   {if (a[i]==a[j])break;
   else k=k+1;}
    if(k==i-1)printf(" %d",a[i]);
 }
   
 
 return 0;
}