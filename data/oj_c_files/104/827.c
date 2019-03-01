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

int find(int,int);
int main()
{
    int ans;
    int x,y;
    cin>>x>>y;
    ans=find(x,y);
    cout<<ans<<endl;
    return 0;
}
int find(int x,int y)
{
    if(x==y) return x;
    if(x>y) return find(y,x);
    else return find(x,y/2);
}
