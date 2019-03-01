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
int i,n,a[100],* p=a;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",p++);
}
p--;
for(i=0;i<n;i++,p--)
{
if(i==0)
printf("%d",* p);
else
printf(" %d",* p);
}
return 0;
}

