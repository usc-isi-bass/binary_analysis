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


int main ()
{
  char str[1000];
  scanf("%s",str);
  int a,b;char n;
  a=0;b=1;
  while (str[a]!='\0') 
    {
        str[a]=toupper(str[a]);
        a++;
    }
  a=0;
  while(str[a]!='\0')
  {
    n=str[a];
    if (n==str[a+1])
    b=b+1;
    else
    {printf("(%c,%d)",n,b);b=1;}  
      a++;}
  

}
