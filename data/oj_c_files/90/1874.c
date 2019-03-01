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

int layout(int m,int n){
        int means,i;
        means=0;
        if(n==1)
            means=1;
        else{
            if(m>=n){
                m-=n;
                for(i=1;i<=n;i++)
                    means+=layout(m,i);
                n--;
            }else{
                n--;
            }
        }
        return means;
    }
    
int main(){
    int t,M[21],N[21],K[21],i,j;
    scanf("%d",&t);
    for(j=0;j<t;j++){
                     scanf("%d%d",&M[j],&N[j]);
                     K[j]=layout(M[j]+N[j],N[j]);
    }
    for(j=0;j<t;j++){
                     printf("%d\n",K[j]);
    }
    return 0;
    }