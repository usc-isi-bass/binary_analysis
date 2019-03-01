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
    int i,j,n,k,h;
    cin>>n;//????6<=n<=50000
    for(i=6;i<=n;i+=2){
        for(j=3;j<=i/2;j+=2){
            for(k=2;k<=sqrt(j);++k)
                if(j%k==0)
                    break;
            for(h=2;h<=sqrt(i-j);++h)
                if((i-j)%h==0)
                    break;
            if(h>sqrt(i-j)&&k>sqrt(j)){
                cout<<i<<"="<<j<<"+"<<i-j<<endl;
                break;
            }
        }
    }
}