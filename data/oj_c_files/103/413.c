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
    char a[1999];
    int i,t;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
       if(a[i]<='z'&&a[i]>='a')
       a[i]-=32;
    }
    for(i=0;a[i]!='\0';i++)
    {
       if(a[i+1]==a[i])
       {
         t=1;
         while(a[i+1]==a[i])
         {
           t++;
           i++;
         }
         cout<<"("<<a[i]<<","<<t<<")";
       }
       else
       cout<<"("<<a[i]<<","<<1<<")";
       
    }
    int ss;cin>>ss;
    return 0;
}    
