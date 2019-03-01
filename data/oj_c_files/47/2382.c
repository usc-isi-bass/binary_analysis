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
    int n,a[100];
    cin>>n;
    int *p;
    p=a; 
    for (int i=0;i<n;i++)
      {
        int x;
        cin>>x;
        *p=x;
        p++;
      }
     for (int i=n-1;i>0;i--)
      {
          p--;    
         cout<<*p<<" ";
      }
      p--;
      cout<<*p;
      return 0;
}                      
