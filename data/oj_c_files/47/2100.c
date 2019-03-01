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


int dfs(int m,int dep)
{
    int t;
    cin>>t;
    if (m==dep) {cout<<t;return 0;}
    dfs(m+1,dep);
    cout<<' '<<t;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    dfs(1,n);
    
    return 0;
}
    
