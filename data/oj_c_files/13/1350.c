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

int shuzu[20000];
int main(){
    int n,x;
    scanf("%d",&n);
    for (int t=0;t<n;t++){
        scanf("%d",&shuzu[t]);
    }
    for (int j=0;j<n;j++){
        for (int i=j+1;i<n;i++){
           if (shuzu[i]==shuzu[j]){
                     shuzu[i]=0;
                }
           }
    }          
    for (int m=0;m<n;m++){
        if (shuzu[m]!=0){
            if (m==0){
            printf("%d",shuzu[m]);
            }
            else {
                   printf(" %d",shuzu[m]);    
                   }
        }
    } 
return 0;    
}