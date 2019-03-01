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
    int n;
    scanf("%d", &n);
    int m, timeCount, numCount;
    int num[60];
    while(n--){
        scanf("%d", &m);
        for(int i = 0; i < m; ++i){
            scanf("%d",& num[i]);
        }
        timeCount = numCount = 0;
        for(int i = 0; i < m; ++i){
            for(int j = numCount; j < num[i]; ++j){
                if(timeCount >= 60) break;
                timeCount ++;
                numCount ++;
            }
            if(timeCount >= 60) break;
            timeCount += 3; 
            //printf("i, timeCount, numCount: %d, %d, %d\n", i, timeCount, numCount);
        }
        for(; timeCount < 60; ++timeCount){
            numCount ++;
        }
        printf("%d\n", numCount);
    }
   
}
