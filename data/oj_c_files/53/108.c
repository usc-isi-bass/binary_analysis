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
{int n,a[300],*p,i,j,k;
scanf("%d",&n);
p=a;
for(;p<a+n;p++)
scanf("%d",p);
p=a;
for(i=0;i<n-1;i++)
{for(j=i+1;j<n;j++)
{if(*(p+i)==*(p+j))
{for(k=j+1;k<n;k++)
*(p+k-1)=*(p+k);
n=n-1;
j=j-1;}
}}
printf("%d",*p);
for(i=1;i<n;i++)
printf(",%d",*(p+i));

return 0;
}