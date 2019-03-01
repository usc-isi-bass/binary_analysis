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
     char c[31],*p=c;
     int a[31],*q=a,num=0,i;
     gets(c);
     for(; *p!='\0'; p++)
     {
           if(*p>='0' && *p<='9')
           {
                *q=(*p)-'0';
                p++;
                while(*p>='0' && *p<='9')
                {
                              *q=(*q)*10+(*(p++)-'0');
                }
                num=1+num;
                q=1+q;
           }
     }
     for(i=0,q=a; i<num; i++,q++)
     {
     cout<<*q<<endl;
     }
     return 0;
}
