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
    int m,i,j,k,l,a,b,c,d,e,f,n,fif,twe,ten;
        a=0;
        i=0;
        b=0;
        c=0;
        d=0;
        e=0;
        f=0;
        scanf("%d",&m);
        for(i=m;i>0;i-=100){
                if(i>=100){
                        a++;
                }
        }
        for(j=(m%100);j>0;j-=50){
                if(j>=50){
                        b++;
                }
        }
        fif=m%50;
        for(k=fif;k>0;k-=20){
                if(k>=20){
                        c++;
                }
        }
        twe=(((m%100)%50)%20);
        for(l=twe;l>0;l-=10){
                if(l>10){
                        d++;
                }
        }
        ten=m%10;
        for(n=ten;n>0;n-=5){
                if(n>=5){
                        e++;
                }
        }
        f=m%5;
        printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
        return 0;
}