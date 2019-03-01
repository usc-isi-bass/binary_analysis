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
    int n,l,i,an[1000];   
    int *p;   
    cin>>n>>l;   
    for(i = 0;i < n;i ++){   
        cin>>an[i];   
    }   
    p = an + n - l;   
    do{   
        cout<<*p<<" ";   
        p ++;   
        if(p > an + n - 1){   
            p = an;   
        }   
        if(p == an + n - l-1){   
            break;   
        }   
    }while(p <= an + n -1);   
    cout<<*(an+n-l-1)<<endl;   
    return 0;   
}