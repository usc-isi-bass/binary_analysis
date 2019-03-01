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
    char string[1000];
    gets(string);
    int m,i;
    m=1;
    for(i=0;(string[i]!='\0');i++)
    {
                                  if(string[i]>='a')string[i]=string[i]+'A'-'a';
                                  else ;
                                  if(string[i]==string[i+1]||string[i]==string[i+1]+'A'-'a')m=m+1;
                                  else
                                  {
                                      printf("(%c,%d)",string[i],m);
                                      m=1;
                                  }
    }
    return 0;
}    