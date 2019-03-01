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
int n,i;
float a,b,p;
scanf("%d",&n);
scanf("%f%f",&a,&b);
p=b/a;
for(i=0;i<n-1;i++)
{
scanf("%f%f",&a,&b);
if(b/a-p>0.05) printf("better\n");
if(p-b/a>0.05) printf("worse\n");
if(p-b/a<=0.05&&b/a-p<=0.05) printf("same\n");
}
return 0;
}

