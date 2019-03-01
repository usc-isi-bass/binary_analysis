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

int main (){
    int i,j;
    int a[10][6],b[10];
    for(i=0;i<10;i++){
        for(j=0;j<6;j++){
          scanf("%d",&a[i][j]);  
        }
    }
    for(i=0;i<10;i++){
        if(a[i][0]!=0){
        b[i]=(12*3600-a[i][0]*3600-a[i][1]*60-a[i][2]+a[i][3]*3600+a[i][4]*60+a[i][5]);
        printf("%d\n",b[i]);}
        else{break;}
    }
    return 0;
}
