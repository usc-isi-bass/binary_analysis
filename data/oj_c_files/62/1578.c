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
    char a[200],b[200];
    gets(a);
    char *p,*q;
    for(p=a,q=b;(*p)!='\0';p++)
    {
       if((p-&a[0])==0)
       {
         *q=*p; 
         q++;
       }
       else
         if((*(p-1)==' ')&&((*p)==' '))
           continue;
         else
         {
           *q=*p;
           q++;
         }
         
    } 
    *q='\0';
    cout<<b<<endl;
    

    return 0;
}
            
       
    
