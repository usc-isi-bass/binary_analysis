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

int main(){
    int i,j,k,n,a[1000];
    cin>>n>>k;
    for(i=0;i<n;++i)cin>>a[i];
    for(i=0;i<n-1;++i)
        for(j=i+1;j<n;++j)
            if(a[i]+a[j]==k)
                goto there;
    there:
    if(i==n-1)cout<<"no"<<endl;
    else cout<<"yes"<<endl;
}