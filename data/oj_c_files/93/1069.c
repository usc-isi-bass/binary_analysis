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
    int a[3]={3,5,7};
    int n;
    cin>>n;
    int i;
    int c[3],k=0;
    for(i=0;i<=2;i++)
    {
                     if(n%a[i]==0)
                     {
                                  c[k]=a[i];
                                  k++;
                      }
    }
    if(k==0)
    {cout<<"n";
    return 0;
    }
    for(i=0;i<k-1;i++)
    cout<<c[i]<<" ";
    cout<<c[k-1];
    return 0;
}
    