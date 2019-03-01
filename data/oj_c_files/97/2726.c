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
 int i,j,k,l,m,n;
 float num;
 scanf("%f",&num);
 i=(int)(num/100);
 num=num-i*100;
 j=(int)(num/50);
 num=num-j*50;
 k=(int)(num/20);
 num=num-k*20;
 l=(int)(num/10);
 num=num-l*10;
 m=(int)(num/5);
 num=num-m*5;
 n=(int)(num);
 num=num-n;
 printf("%d\n%d\n%d\n%d\n%d\n%d\n",i,j,k,l,m,n);
     
 return 0;
} 