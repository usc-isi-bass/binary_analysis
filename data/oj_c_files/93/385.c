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
    int m,a,b,c;
    char n;
    int i,j,k;
    i=3;
    j=5;
    k=7;
    cin>>m;
    a=m%3;
    b=m%5;
    c=m%7;
    if(a==0 && b==0 && c==0)cout<<i<<" "<<j<<" "<<k;
    else if(a==0 && b==0 && c!=0)cout<<i<<" "<<j;
    else if(a==0 && b!=0 && c==0)cout<<i<<" "<<k;
    else if(a!=0 && b==0 && c==0)cout<<j<<" "<<k;
    else if(a==0 && b!=0 && c!=0)cout<<i;
    else if(a!=0 && b==0 && c!=0)cout<<j;
    else if(a!=0 && b!=0 && c==0)cout<<k;
    else cout<<"n"<<endl;
    cin.get();cin.get();cin.get();
    return 0;
    
}