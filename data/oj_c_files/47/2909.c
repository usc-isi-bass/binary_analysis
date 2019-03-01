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
{int i,j,*p,a[100]={0},n,t=0;
scanf("%d",&n);
for(p=a;p<n+a;p++)
scanf("%d",p);
p=a;
for(i=0;i<n-1;i++)
{t=*(a+n-1);
for(p=a+n-1;p>=a+i+1;p--)
{*p=*(p-1);}
*(a+i)=t;
}
printf("%d",*a);
for(p=a+1;p<(a+n);p++)
printf(" %d",*p);
}