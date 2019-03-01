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
double n,m,i=0,j,a,b,temp,sum=2;
cin>>n;
while(i<n)
{
cin>>m;
a=2;
b=1;
for(j=1;j<m;j++)
{
temp=a;
a=a+b;
b=temp;
sum+=a/b;
}
printf("%.3f\n",sum);
sum=2;
i++;
}
}