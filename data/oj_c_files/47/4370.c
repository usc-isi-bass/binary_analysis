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
{int a[100],b[100];
int n,*p,*t;
scanf("%d",&n);
for(p=a;p<=a+n-1;p++)
scanf("%d",p);
for(p=a,t=b+n-1;p<=a+n-1;p++,t--)
*t=*p;
for(t=b;t<b+n-1;t++)
printf("%d ",*t);
printf("%d",*t);

}