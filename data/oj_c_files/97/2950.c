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
int m,n100,n50,n20,n10,n5,n1;
scanf("%d",&m);
for(n100=0;m-100*n100>=0;n100++);
n100=n100-1;
m=m-100*n100;
for(n50=0;m-50*n50>=0;n50++);
n50=n50-1;
m=m-50*n50;
for(n20=0;m-20*n20>=0;n20++); 
n20=n20-1;
m=m-20*n20;
for(n10=0;m-10*n10>=0;n10++);
n10=n10-1;
m=m-10*n10;
for(n5=0;m-5*n5>=0;n5++); 
n5=n5-1;
m=m-5*n5;
for(n1=0;m-1*n1>=0;n1++);
n1=n1-1;
m=m-1*n1;
printf("%d\n%d\n%d\n%d\n%d\n%d\n",n100,n50,n20,n10,n5,n1);
}