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
    int n,m,i,s,k,p;
    scanf("%d %d\n",&n,&m);
    while(n!=0&&m!=0){
        int a[n];
        for(p=0;p<n;p++){
            a[p]=1;
        }
        s=0;
        k=0;
        i=0;
        while(k<n-1){
            s+=a[i];
            if(s==m){
                a[i]=0;
                s=0;
                k++;
            }
            i++;
            if(i>=n){
                i=i-n;
            }
        }
        for(i=0;i<n;i++){
            if(a[i]==1){
                i=i+1;
                printf("%d\n",i);
            }
        }  
        scanf("%d %d\n",&n,&m);
    }
    return 0;
}