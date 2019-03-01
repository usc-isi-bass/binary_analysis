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
 int i;
 char ch[101],*p;
 p=ch;
 i=0;
 while(scanf("%c",&ch[i])&&ch[i]!='\n')
  i++; 
 while(i>1)
 {
  printf("%c",*p+*(p+1));
  p++;
  i--;
 }
 printf("%c\n",*p+ch[0]);
 return 0;
}




