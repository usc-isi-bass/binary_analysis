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
    char str[300];
    cin.get(str,300);
    char *p=str;
    int l;
    l=strlen(str);
    int i;
    int q=0;
    for(i=0;i<l;i++,p++)
    {
       if((*p>=48)&&(*p<=57))
        {
           if((*(p+1)>=48)&&(*(p+1)<=57))
               cout<<*p;
            if((*(p+1)<48)||(*(p+1)>57))
               cout<<*p<<endl;                
        }                                             
    }
    
    
      
    return 0;                 
    
}
