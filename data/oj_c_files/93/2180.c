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
int n,i,j,k;
scanf("%d",&n);
i=n%3;
if(i==0)
{
printf("3");
}
j=n%5;
if(j==0)
{
if(i==0)
printf(" 5");
else
printf("5");
}

k=n%7;
if(k==0)
{
if(i==0||j==0)
printf(" 7");
else
printf("7");
}
if(i!=0&&j!=0&&k!=0)
printf("n");
}

