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
 int w,n;
 scanf("%d",&w);
 n=w+5;
 if(n>7)
 n -= 7;
 if(n==5)
 printf("1\n");
 n+=3;
 if(n>7)
 n -= 7;
 if(n==5)
 printf("2\n3\n");
  n+=3;
 if(n>7)
 n -= 7;
 if(n==5)
 printf("4\n");
  n+=2;
 if(n>7)
 n -= 7;
 if(n==5)
 printf("5\n");
  n+=3;
 if(n>7)
 n -= 7;
 if(n==5)
 printf("6\n");
  n+=2;
 if(n>7)
 n -= 7;
 if(n==5)
 printf("7\n");
  n+=3;
 if(n>7)
 n -= 7;
 if(n==5)
 printf("8\n");
  n+=3;
 if(n>7)
 n -= 7;
 if(n==5)
 printf("9\n");
  n+=2;
 if(n>7)
 n -= 7;
 if(n==5)
 printf("10\n");
  n+=3;
 if(n>7)
 n -= 7;
 if(n==5)
 printf("11\n");
  n+=2;
 if(n>7)
 n -= 7;
 if(n==5)
 printf("12\n");
 return 0;
}