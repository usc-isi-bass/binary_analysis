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
    int n,i,c;
    int a[101]={0};
    cin >>n;
    cin>>c;
    a[c]=1;
    cout<<c;
    while(cin>>c)
    {
        if(a[c]==0)
        {
          cout <<" "<<c;
          a[c]=1;
        }
   }
//for (;;) ;          
    return 0;
}
                       
                       
