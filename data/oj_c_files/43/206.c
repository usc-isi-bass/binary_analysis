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

int isprime(int n)
{
 int i;
for(i=2;i<n;i++)
if(n%i==0)
return 0;
return 1;
}

int main(void)
{
int m;
int i;
scanf("%d",&m);

for(i=3;i<=m/2;i+=2)
{
if(isprime(i)&&isprime(m-i))
{
printf("%d %d\n",i,m-i);
continue;
}
}
return 0;
}