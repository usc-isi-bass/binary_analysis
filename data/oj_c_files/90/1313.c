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

int fang(int m1,int n1)
{
    if(n1==1)return(1);
    if(m1>n1)
    return(fang(m1,n1-1)+fang(m1-n1,n1));
    if(m1==n1)
    return(fang(m1,n1-1)+1);
    if(m1<n1)
    return(fang(m1,m1));
}
int main()
{
    int t,m[21],n[21],i,s[21];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&m[i],&n[i]);
        s[i]=fang(m[i],n[i]);
    }
    for(i=0;i<t;i++)
    printf("%d\n",s[i]);

}
