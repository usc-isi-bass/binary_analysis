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


void main ()
{
int n,n1,i,j,k;
scanf("%d",&n);
if(n==1) printf("End\n");


if(n!=1)
{
do
{
if(n%2==1)
{
n1=n*3+1;
printf("%d*3+1=%d\n",n,n1);
n=n1;
}
if(n%2==0)
{
n1=n/2;
printf("%d/2=%d\n",n,n1);
n=n1;
}
}while(n!=1);
printf("End\n");
}
}