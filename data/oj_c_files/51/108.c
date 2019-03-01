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
    int n,m,i,j,max=0;
    int c[501]={0};
    char a[501];
    char b[501][6]={0};
    scanf("%d",&n);
    scanf("%s",a);
    m=strlen(a);
    for(j=0;j<=m-n;j++){
    for(i=0;i<n;i++){
                     b[j][i]=a[i+j];                 
                     }
    }
    for(j=0;j<=m-n;j++){
                        for(i=j+1;i<=m-n;i++){
                                              if(strcmp(b[i],b[j])==0){
                                                                       c[j]++;                         
                                              }                      
                        }
    }
    for(i=0;i<=m-n;i++){
                       if(c[i]>c[max]){
                                       max=i;
                       }                   
    }
    if(c[max]==0){printf("NO");}
    if(c[max]!=0){
    printf("%d\n",c[max]+1);
    for(j=0;j<=m-n;j++){
                       if(c[j]==c[max]){
                                       for(i=0;i<n;i++){
                                       printf("%c",b[j][i]);                                    
                                       }
                     printf("\n");
                     }
    }} 
    return 0;
    }