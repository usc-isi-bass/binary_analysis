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
	int sum=0,i,t;
	char str[5]={0},str2[5]={0};
	  scanf("%s",str);
  for (i=0;str[i]!='\0';i++)
	  sum=sum+1;
  for (i=sum-1;i>=0;i--)
  { 
	  t=sum-i-1;
	  str2[t]=str[i];
  }
  printf("%s",str2);

}