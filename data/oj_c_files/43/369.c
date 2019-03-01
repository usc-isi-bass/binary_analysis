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

int zhi(int x)
{
    int b=1,i=1;
    for(i=2;i<=x/2;i++)
    if(x%i==0) b=b+1;
    return b;
}
int main()
{
    int i,m;
    cin>>m;
    for(i=3;i<=m/2;i=i+2)
    {
                         if(zhi(i)==1&&zhi(m-i)==1)
                         cout<<i<<' '<<m-i<<endl;
    }
   
   
    return 0;
}
