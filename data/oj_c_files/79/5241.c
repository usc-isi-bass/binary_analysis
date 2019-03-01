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
    int n, m, a[MAX], i, j, b[MAX][MAX], t, p;
    n = -1;
    m = -1;
    while(n!=0&&m!=0){

    scanf("%d%d", &n, &m);
	if(n!=0&&m!=0){
    t = n;
    for(i = 0; i < n; i++){
        a[i] = i+1;
    }
    
    int k = 0;
    for(i = 0; i < n; i++){
        if(k == 0){
            for(j = 0; j < m; j++){
            if(k!=t-1){
                b[i][j]=a[k];
                k++;
            }else{
                b[i][j]=a[k];
                k=k-t+1;
            }
        }
        }else{
            k--;
            for(j = 0; j < m; j++){
                if(k!=t-1){
                    b[i][j]=a[k];
                    k++;
                }else{
                    b[i][j]=a[k];
                    k=k-t+1;   
                }
            }            
        }
        if(i != n){
            for(j = 0; j < t; j++){
            if(b[i][m-1]==a[j]){
                for(p = j; p < t-1; p++){
                    a[p] = a[p+1];
                }
                t--;
            }
        }
        }
    }
    printf("%d\n", b[n-1][0]);
	}

	}
    return 0;

}
