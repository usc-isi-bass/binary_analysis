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

int main ()
{
    char a[1002]={0};
    cin>>a;
    int count=1;
    for (int i=1;i<=strlen(a);i++)
    {
        if ((a[i]==a[i-1])||(a[i]==a[i-1]+32)||(a[i]==a[i-1]-32))
        {
             count++; 
        }
        else 
        {
             if (a[i-1]>='a'&&a[i-1]<='z')
             {
                  char big=a[i-1]-32;
                  cout<<"("<<big<<","<<count<<")";
                  count=1; 
             }
             else 
             {
                  char big=a[i-1];
                  cout<<"("<<big<<","<<count<<")";
                  count=1;
             }
        }
    }
    

        return 0;
    
}
