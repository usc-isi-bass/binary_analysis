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
int a[6]={100,50,20,10,5,1},count[6]={0,0,0,0,0,0};
int n;
cin>>n;
for(int i=0;i<6;i++)
    {
       if(n>=a[i])
         {
           count[i]=n/a[i];
           n=n-count[i]*a[i];
           }
         cout<<count[i]<<endl;
    }
return 0;
}
