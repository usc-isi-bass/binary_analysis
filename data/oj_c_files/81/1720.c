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
    int A[5][5],m,n,row,list,i;
    row=0;
    while(row<5){
        list=0;
        while(list<5){
            scanf("%d",&A[row][list]);
            list++;
        }
        row++;
    }
    scanf("%d%d",&m,&n);
    if(m<0||n<0||m>4||n>4){
        printf("error");
    }
    else{
        i=0;
        while(i<5){
            row=A[m][i];
            A[m][i]=A[n][i];
            A[n][i]=row;
            i++;
        }
        row=0;
        while(row<5){
            list=0;
            while(list<5){
                if(list==4){
                    printf("%d\n",A[row][list]);
                }
                else{
                printf("%d ",A[row][list]);
                }
                list++;
            }
            row++;
        }
    }
    return 0;
}

