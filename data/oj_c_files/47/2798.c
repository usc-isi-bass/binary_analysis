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
    int sz[100];
    int n;
    int e;
    int a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            scanf("%d",&(sz[i]));}
    b=n/2;
    for(int k=0;k<b;k++){
            a=n-k-1;
            e=sz[a];
            sz[a]=sz[k];
            sz[k]=e;
            }

    for(int i=0;i<n;i++){
            printf("%d",sz[i]);
            if(i<n-1){printf(" ");
            }
            }
    return 0;
    
                    
    }
