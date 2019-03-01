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
    char str[150]; 
    char *p,*q;
    gets(str);
    p=str;
    q=str;
    while(*(p+1)!='\0')
    {
                   cout<<(char)((int)*p +(int)(*(p+1)));
                   p++;
    }
    if(*(p+1)=='\0')
    {
                    cout<<(char)((int)*p + (int)*q);
    }
    return 0;
}
      
