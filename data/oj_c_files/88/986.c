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
    char a[30];
    gets(a);
    char *p=a;
    char *q,*k;
    for(p=a;*p!='\0';p++)
    {
        if(*p>='0'&&*p<='9')
         {
           for(q=p;*q!='\0';q++)
         {
            if(*q<'0'||*q>'9')
            {
               cout<<endl;
               break;
            }
            cout<<*q;
            k=q;
         }
         p=k;
         }
    }
   return 0;
}