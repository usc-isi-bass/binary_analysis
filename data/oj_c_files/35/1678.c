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
	int sz[8][8],c,r,l;
	scanf("%d,%d",&c,&r);
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(int k=0;k<c;k++){
        int q=0;
        for(l=1;l<r;l++){
            if (sz[k][q]<sz[k][l]){
                q = l;
            }
        }
        for(l=0;l<c;l++){
            if (sz[l][q]<sz[k][q]){
                break;
            }
        }
        if(l==c){
            printf("%d+%d",k,q);
            return 0;
        }
    }
    printf("No");
    return 0;
}
