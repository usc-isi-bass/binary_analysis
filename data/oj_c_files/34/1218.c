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
    int n,i,a[100];
    cin>>n;
    a[0]=n;
    for(i=0;i<100;i++)
    {
        if(a[i]%2==1&&a[i]!=1)  
        {
           a[i+1]=a[i]*3+1;
            cout<<a[i]<<"*3+1="<<a[i+1]<<endl;
            }
        if(a[i]%2==0)
          {
            a[i+1]=a[i]/2;
            cout<<a[i]<<"/2="<<a[i+1]<<endl;
            }
        if(a[i]==1)
        {
           cout<<"End";
           break;
           }
        }
        return 0;
        }