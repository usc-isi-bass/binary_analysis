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

int f(int m,int n){
    if(m<n)return f(m,m);
    if(m==1&&n!=0||n==1&&m!=0)return 1;//??? m>=1
    if(m==0||n==0)return 1;//??????????0
    if(m>=n)return f(m-n,n)+f(m,n-1);
}
int main(){
    int m,n,t;
    cin>>t;
    while(t--){
        cin>>m>>n;
        cout<<f(m,n)<<endl;
    }
}