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

int prime(int k)
{
int p=(int)sqrt(k);
int t;
for (t=3;t<=p;t+=2)
if (k%t==0) break;
if (t>p) return 1; else return 0;
}
main()
{
int n;
scanf("%d",&n);
if (n<=200000)
{
for (int i=3;i<=n/2;i+=2)
if (prime(i))
{
if (prime(n-i))
printf("%d %d\n",i,n-i);
}}
else printf("%d",n);
}
