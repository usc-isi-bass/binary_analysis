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
    int k,n[1000],m[1000],a,b,c,s[100][100],x[1000];
    scanf("%d",&k);
    for(a=0;a<k;a++){
        scanf("%d %d",&m[a],&n[a]);
        for(b=0;b<m[a];b++){
            for(c=0;c<n[a];c++){
                scanf("%d",&s[b][c]);
            }
        }
        x[a]=0;
            for(c=0;c<n[a];c++){
                if(m[a]>1){
            x[a]=x[a]+s[0][c]+s[m[a]-1][c];
        }else{
            x[a]=x[a]+s[0][c];
        }
            }
       if(m[a]>2){
       if(n[a]>1){for(b=1;b<m[a]-1;b++){
            x[a]=x[a]+s[b][0]+s[b][n[a]-1];
        }
       }else{
           x[a]=x[a]+s[b][0];
       }
       }
        printf("%d\n",x[a]);
    }
    return 0;
}
