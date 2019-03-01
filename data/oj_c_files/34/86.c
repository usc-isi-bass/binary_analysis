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
    int a,b,c;
    cin>>a;
    while(a!=1){
    if(a%2==1)
    {cout<<a<<"*"<<3<<"+"<<1<<"="<<a*3+1<<endl;
    a=a*3+1;}
    else{ 
    cout<<a<<"/"<<2<<"="<<a/2<<endl;
    a=a/2;}
    
}
 cout<<"End"<<endl;
          return 0;
        }
