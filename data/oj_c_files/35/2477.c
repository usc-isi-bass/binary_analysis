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
    int m,n,a[10][10],i,j,max[10],min[10],k=0;
    char t;
    scanf("%d%c%d",&m,&t,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        max[i]=a[i][0];
    }
    for(j=0;j<n;j++){
        min[j]=a[0][j];
    }
   for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                if(a[i][j]>max[i]){
                    max[i]=a[i][j];
                }
                if(a[i][j]<min[j]){
                    min[j]=a[i][j];
                }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(max[i]==min[j]){
                printf("%d+%d\n",i,j);
                k++;
                    }
                }
            }
    if(k==0){
        printf("No");
    }
    return 0;
}


