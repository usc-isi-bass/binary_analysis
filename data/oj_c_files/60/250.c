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
{int p=1;
for (int i=2;i<=sqrt(k);i++)
if (k%i==0) {p=0; break;}
return p;
}
main()
{
int n;
int f=1;
scanf("%d",&n);
for (int i=5;i<=n;i++)
if(prime(i)&&prime(i-2))
{printf("%d %d\n",i-2,i); f=0;}
if (f) printf("empty");
}