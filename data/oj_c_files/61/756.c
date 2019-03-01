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

int f(int n)
{
int c;
if(n==1)
   c=1;
else if(n==2)
   c=1;
else
   c=f(n-1)+f(n-2);
return c;
}
void main()
{
int n,i;
scanf("%d",&n);
int a[100];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("\n");
}
for(i=0;i<n;i++)
printf("%d\n",f(a[i]));

}
