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
    char ch;
    int flag=0;
    while((ch=getchar())!='\n')
    {
             if(ch==' '&&flag==0)
             {
                      putchar(ch);
                      flag=1;
             }
             else if(ch!=' ') 
             {
                  flag=0;
                  putchar(ch);
             }
   }
   getchar();
   getchar();
   getchar();
}
