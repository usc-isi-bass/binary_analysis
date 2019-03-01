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
int n,time,cs,num;
int a[1000],b[1000][60];
scanf("%d",&n);
for (int i=0;i<n;i++){
            scanf ("%d",&a[i]);
     for (int j=0;j<a[i];j++){
             scanf("%d",&b[i][j]);
     }    
}
for (int k=0;k<n;k++){
     time=60;
     cs=0;
     num=0;
     if (a[k]==0){
            printf("60\n");
            continue;
     }
     for (int m=0;m<=a[k];m++){
        for (int t=0;t<60;t++){
            if (cs==b[k][m]){
                 time-=3;
                 break;
            }
            if(time<=0){
                 printf("%d\n",cs);
                  num=1;
                 break;
            }
            time--;
            cs++;
        }
     if (num==1){
        break;
     }
    }
} 
return 0;
}