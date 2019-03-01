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

int main() {
    int n,i,j,sz[199][2];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d %d\n",&(sz[i][0]), &(sz[i][1]));
    }
    j=0;
    for(i=0;i<n;i++){
        if(sz[i][1]-sz[i][0]==1||sz[i][0]-sz[i][1]==2){
            j++;
        }
        if(sz[i][1]-sz[i][0]==-1||sz[i][0]-sz[i][1]==-2){
            j--;
        }
    }
    if(j>0){
        printf("A");
    }
    if(j==0){
        printf("Tie");
    }
    if(j<0){
        printf("B");
    }
    return 0;
}