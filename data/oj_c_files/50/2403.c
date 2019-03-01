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
  int w,a,b;
  scanf("%d",&w);
  a=w+12;
  b=a%7;
  if(b==5)
  printf("1\n");
  
  a=b+31;
  b=a%7;
  if(b==5)
  printf("2\n");
  
  a=b+28;
  b=a%7;
  if(b==5)
  printf("3\n");
  
  a=b+31;
  b=a%7;
  if(b==5)
  printf("4\n");
  
  a=b+30;
  b=a%7;
  if(b==5)
  printf("5\n");
  
  a=b+31;
  b=a%7;
  if(b==5)
  printf("6\n");
  
  a=b+30;
  b=a%7;
  if(b==5)
  printf("7\n");
  
  a=b+31;
  b=a%7;
  if(b==5)
  printf("8\n");
  
  a=b+31;
  b=a%7;
  if(b==5)
  printf("9\n");
  
  a=b+30;
  b=a%7;
  if(b==5)
  printf("10\n");
  
  a=b+31;
  b=a%7;
  if(b==5)
  printf("11\n");
  
  a=b+30;
  b=a%7;
  if(b==5)
  printf("12\n");
  

}