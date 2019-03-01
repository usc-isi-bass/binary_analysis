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
    int n,i;char a[50]={0};
    cin>>n;
    while(n--){
        cin>>a;
        if(isdigit(a[0])){
            cout<<"no"<<endl;
            continue;
        }
        for(i=0;a[i]!=0;++i){
            if(a[i]==95||isupper(a[i])||islower(a[i])||isdigit(a[i]))
                continue;
            else break;
        }
        a[i]==0?cout<<"yes"<<endl:cout<<"no"<<endl;
    }
}