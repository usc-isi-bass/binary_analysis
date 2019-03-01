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
    int a[101][101],*p;
    int m,n;
    cin>>m>>n;
    for (p=*a;p<*a+m*n;p++) cin>>*p;
    p=*a;
    for (int i=0;i<n;i++)
    {
        int a=0,b=i;
        while ((a<m)&&(b>=0))
        {
              cout<<*(p+a*n+b)<<endl;
              a++;
              b--;
        }
    }
    for (int i=1;i<m;i++)
    {
        int a=i,b=n-1;
        while ((a<m)&&(b>=0))
        {
              cout<<*(p+a*n+b)<<endl;
              a++;
              b--;
        }
    }
    
    return 0;
}
