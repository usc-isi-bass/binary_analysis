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
    char a[110]={0};
    int b[110]={0};
    cin>>a;
    int i,p=0,k;
    for(i=0;i<=110;i++)
    {
                       if(a[i]!=0)
                       p++;
    }
    for(i=0;i<=p-2;i++)
    {
                       if(a[i]==a[0]) continue;
                       else 
                       {
                            k=i;
                            while(k>=0)
                            {
                                             if((a[k]==a[0])&&(b[k]==0)) break;
                                             k--;
                            }
                            cout<<k<<" "<<i<<endl;
                            b[k]=1;
                       }
    }
    return 0;
}