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

int k[26][2];
int main(){
    int i, j, n, m = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d", &k[i][1]);
         k[i][0] = 1;
        for(j = 0; j < i; j++){
            if(k[j][1] >= k[i][1] && k[j][0]+1 > k[i][0]) k[i][0] = k[j][0]+1;
        }
        if(k[i][0] > m) m = k[i][0];
    }
    printf("%d", m);
    return 0;
}