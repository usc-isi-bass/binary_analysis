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

int with7(int x)
{
    if(x%7==0)  return 1;
    while(x>0)
    {
              if(x%10==7) return 1;
              x=x/10;
    }
    return 0;
}


int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
        if(!with7(i))
            sum+=(i*i);
    cout<<sum<<endl;
    return 0;
}
            
