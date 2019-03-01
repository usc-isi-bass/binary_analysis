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
    int sum[1000];
    scanf("%d",&n);
    char zfc[1000][20];
    int i,j;
    for(int i=0;i<n;i++){
        scanf("%s",&(zfc[i]));
    }
    for(int i=0;i<n;i++){
        sum[i]=1;
        if(zfc[i][0]<=57&&zfc[i][0]>=48)
        sum[i]=0;
        for(j=0;zfc[i][j]!='\0';j++){
            if((zfc[i][j]>=65&&zfc[i][j]<=90)||(zfc[i][j]>=97&&zfc[i][j]<=122)||(zfc[i][j]==95)||(zfc[i][j]>=48&&zfc[i][j]<=57));
        else{
            sum[i]=0;
            break;
        }
        }
        }
    for(int i=0;i<n;i++){
        if(sum[i]==0){
        printf("no\n");
    }
    else{
        printf("yes\n");
    }
    }
    return 0;
}



