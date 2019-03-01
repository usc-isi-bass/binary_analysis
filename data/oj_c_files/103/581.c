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

char f(char x)
{
    
     if(x>='a')
     return x-'a'+'A';
     else
     return x;
     }
int main( )
{
int  a,b,i;
char str[1000];
scanf("%s", str);
a=f(str[0]);
b=1;

for(i = 1; i < strlen(str); i++)
{
      if (a==f(str[i]))
      b++;
      else
      {
          printf("(%c,%d)",a,b);
          a=f(str[i]);
          b=1;
      }
      }
printf("(%c,%d)",a,b);


}
