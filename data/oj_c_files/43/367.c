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

int ss[70000];
void ps()
{
    int i,j;
    for(i=2;i<70000;i++)
        if(!ss[i])
        for(j=i*2;j<70000;j=j+i)
            ss[j]=1;
}
int main()
{
    int n,i;
    memset(ss,0,sizeof(ss));
    ps();
    cin>>n;
    for(i=3;i<=n/2;i++)
    if(!ss[i]&&!ss[n-i])
    cout<<i<<' '<<n-i<<endl;
}
