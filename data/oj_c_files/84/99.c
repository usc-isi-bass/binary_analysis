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
int a[100],max1,max2,n,i,*pa;
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
pa=a;
max1=a[0];
for(i=1;i<n;i++)
{if(a[i]>max1)
{max1=a[i];
    pa=&a[i];
}
}
*pa=0;
pa=a;
max2=a[0];
for(i=1;i<n;i++)
{if(a[i]>max2)
    max2=a[i];
}
printf("%d\n%d",max1,max2);
}
