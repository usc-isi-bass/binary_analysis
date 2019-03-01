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

int a[30],dp[30]={1};
int n;
int ans=-1;
int main()
{
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        dp[i]=1;
        for(j=0;j<i;j++)
        {
            if(a[j]>=a[i] && dp[j]+1>dp[i])
            {
                dp[i]=dp[j]+1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(dp[i]>ans)
        {
            ans=dp[i];
        }
    }
    printf("%d\n",ans);
    return 0;
}
