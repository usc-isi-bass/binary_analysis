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
    int a[20][6],j,i,SUM[11],n;
    for(i=0;i<100;i++){
        for(j=0;j<6;j++){
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<100;i++){
        if(a[i][0]==0){
            n=i;
            break;
        }
    }
    for(i=0;i<n;i++){
        SUM[i]=(60-a[i][2]+a[i][5])+(60-a[i][1]-1)*60+a[i][4]*60+(12-1-a[i][0])*3600+a[i][3]*3600;
    }
    for(i=0;i<n;i++){
        printf("%d\n",SUM[i]);
    }
    return 0;
}
