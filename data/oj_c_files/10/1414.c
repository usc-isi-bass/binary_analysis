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

const int maxn=100;
int a[maxn],n,f[maxn],ans;
void init()
{
     cin >>n;
     for (int i=0;i<n;i++)
         cin >>a[i];
 }
void solve()
{
     ans=0;
     for (int i=0;i<n;i++)
     {
         f[i]=1;
         for (int j=0;j<i;j++)
             if (a[j]>=a[i] && f[j]>=f[i])
                f[i]=f[j]+1;
         if (f[i]>ans)
            ans=f[i];
     }     
 }
int main()
{
    init();
    solve();
    cout <<ans<<endl;
    return 0;
}
