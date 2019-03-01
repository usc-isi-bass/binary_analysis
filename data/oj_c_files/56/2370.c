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
int n,t,i,z=1,a[5],m=0;
scanf("%d",&n);
t=n;
while(t/10!=0)
{z++;t=t/10;
}
for(i=0;i<z;i++)
{
a[i]=n%10;
m=m*10+a[i];
n=n/10;
}
printf("%d",m);
}