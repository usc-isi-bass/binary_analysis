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

int num(int m[],int i,int k);
void main()
{
    int k,i,t,ans=0;
    int m[25];
    scanf("%d",&k);
    for(i=0;i<k;i++)
        scanf("%d",&m[i]);
    for(i=0;i<=k;i++){
        t=num(m,i,k);
        if(t>ans) ans=t;
    }
    printf("%d",ans);
}
int num(int m[],int i,int k)
{
    int re=0,j,t;
    if(i==k) return(0);
    for(j=i+1;j<=k;j++)
        if(m[j]<=m[i])
        {
            t=num(m,j,k);
            if(t>re) re=t;
        }
    re++;
    return(re);
}