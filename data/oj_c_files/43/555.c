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

int prime(int n)
{
int i;
double k=sqrt((double)n);
for(i=2;i<=k;i++)
if(n%i==0) break;
if(i>k) return 1;
else return 0;
}
int main()
{
int m;
scanf("%d",&m);
int i;
for(i=3;i<=m/2;i+=2)
if(prime(i)&&prime(m-i)) {printf("%d %d\n",i,m-i);continue;}
return 0;
}