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
    char a[200],*q;
    gets(a);            //????? 
    q=a;
    for(int i=0;i<strlen(a);i++)
    {if(*(q+i)!=' ')
       cout<<*(q+i);
     if(*(q+i)==' ')         //??????? 
       if(*(q+i-1)!=' ')
       cout<<*(q+i);
       }
       cout<<endl;
   

return 0;
}
