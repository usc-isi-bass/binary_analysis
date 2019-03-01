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
    int row,col;
    scanf("%d%d",&row,&col);
    int array[100][100];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&array[i][j]);
            }
        }
    int p=0,q=0;
       while(p<row&&q<col){
         int e=0;
         while(p+e<row&&q-e>=0){
              printf("%d\n",array[p+e][q-e]);
              e++;
              }
         if(q<col-1){
            q++;
            }
         else if(q==col-1){
             p++;
             }
         }
    return 0;
}