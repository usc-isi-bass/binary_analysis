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

void nixu( int k );
int main()
{
    int n;
    cin>>n;
     nixu(n);
    return 0;
    }
    void nixu (int k)
    {
      if(k>0)
        {
         cout<<k%10;k/=10; 
         nixu (k);    
             }   
         }