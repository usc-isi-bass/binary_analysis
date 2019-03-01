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
    int n,i,f,j;
    cin>>n;
    if(n<=4){cout<<"empty";return 0;}
    for (i=3;i<=n-2;i+=2)
    {
        f=1;
        for (j=2;j<i;j++)
        {
            if ((i%j==0)||((i+2)%j==0)){f=0;break;}
        }
        if (f==1)cout<<i<<' '<<i+2<<endl;
    }
    //while(1);
} 