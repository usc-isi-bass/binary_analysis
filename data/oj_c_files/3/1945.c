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
    int a[1000];//?????1000???a 
    int i,j=1,p,q;//????????i???????i?j? ?????q? 
    int n,k,m;//????????n?????k??????m 
    cin>>n>>k;//??n?k 
    for(i=1;i<=n;i++)//???? 
    {
            cin>>m;//??? m 
            a[i]=m;//?m???a[i] 
    }
    while(j<n)//???????? 
    {
                    p=j+1;
                    while(p<=n)
                    {
                                       q=a[j]+a[p];
                                       if(q==k) break;//????k????? 
                                       else p=p+1;
                    }
                    if(p<=n)break;
                    else j=j+1;
    }
    if(j==n&&p==n+1)//?????????? 
    cout<<"no";
    else cout<<"yes";
    return 0;
}
                                       
            