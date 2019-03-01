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
    int m, n;
    scanf("%d%d", &m, &n);
    int height[m+2][n+2];
    int i1, i2;
    for(i2=0; i2<n+2; i2++){
        height[0][i2]=-1;
        height[m+1][i2]=-1;
    }
    for(i1=0; i1<m+2; i1++){
        height[i1][0]=-1;
        height[i1][n+1]=-1;
    }
    for(i1=1; i1<m+1; i1++){
        for(i2=1; i2<n+1; i2++){
            scanf("%d", &height[i1][i2]);
        }
    }

    for(i1=1; i1<m+1; i1++){
        for(i2=1; i2<n+1; i2++){
            if(height[i1][i2]>=height[i1-1][i2] && height[i1][i2]>=height[i1+1][i2] && height[i1][i2]>=height[i1][i2-1] && height[i1][i2]>=height[i1][i2+1]) {
                printf("%d %d\n", i1-1, i2-1);
            }
            else continue;
        }
    }
    return 0;
}
