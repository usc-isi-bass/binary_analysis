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
int n;
scanf("%d",&n);
int m=n/100;
int a=(n-m*100)/50;
int b=(n-m*100-a*50)/20;
int c=(n-m*100-a*50-b*20)/10;
int d=(n-m*100-a*50-b*20-c*10)/5;
int e=(n-m*100-a*50-b*20-c*10-d*5)/1;
printf("%d\n%d\n%d\n%d\n%d\n%d\n",m,a,b,c,d,e);
return 0;
}
