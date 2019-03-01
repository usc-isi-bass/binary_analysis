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
    int a;
    scanf("%d",&a);
    char c[100][10000];
    int d[100];
    int e[100][1000];
    int b=0;
    getchar();
    for(int i=0;i<=a-1;i++){
            gets(c[i]);
            d[i]=strlen(c[i]);
            for(int j=0;j<=d[i]-1;j++){
                    e[i][j]=0;
                    for(int k=0;k<=d[i]-1;k++){
                                   if(c[i][j]==c[i][k]){
                                                        e[i][j]++;
                                                        }}
                    if(e[i][j]==1){
                                   b++;
                                   printf("%c\n",c[i][j]);
                                   break;}
                    
                    }
                    if(b==0){
             printf("no\n");
             }
             b=0;}
    
            
    int y;
    scanf("%d",&y);
    return 0;}
