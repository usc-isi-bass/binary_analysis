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
int n,count=0;
scanf("%d",&n); /*??????*/
if(n==1)
printf("End");
else
{
do{
if(n%2)
{
n=n*3+1; /*?????n?3?1*/
printf("%d*3+1=%d\n",(n-1)/3,n);
}
else
{
n/=2; /*????n??2*/
printf("%d/2=%d\n",2*n,n);
}
}while(n!=1); /*n???1???????*/
printf("End");
}
} 