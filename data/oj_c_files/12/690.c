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


/**
* @desc ??????: ??2?1000???????
* @author ??? 1100012829 
* @date 2011-10-12
*/
int main()
{    
int a[16]={0},n,i=1;
for(;a[i]!=-1;)//a[i]??????? 
{
    n=0;
    for(i=0;;i++)//???
    {
            cin>>a[i];
            for(int j=0;j<i;j++)
            {
                    if(a[j]*2==a[i]||a[j]==a[i]*2){n++;}
            }
            if(a[i]==0||a[i]==-1){break;}//?????? -1?????????
    }
    if(a[i]!=-1){cout<<n<<endl;}
}
}
