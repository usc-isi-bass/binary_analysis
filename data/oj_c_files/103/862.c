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
    char a[1100]={'\0'};
    int i,j,max;
    cin>>a;
    for(i=0;i<strlen(a);i++)
       if(a[i]>='a'&&a[i]<='z')
          a[i]=a[i]-32;
    for(i=0;i<strlen(a);i++)
    {
       for(j=0;j<strlen(a)-i;j++)
       {
          if(a[i]==a[i+j])
             max=j+1; 
          else break;                         
       }
       cout<<"("<<a[i]<<','<<max<<")";
       i=i+max-1; 
    }
    return 0;
}
