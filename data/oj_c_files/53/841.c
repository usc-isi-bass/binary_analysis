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
    int a,n,dp[100000]={0},f=0;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a;
        if (dp[a]==0)
          if (f==0) { cout<<a; f++; }
          else cout<<","<<a;
        dp[a]=1;
    }
}
