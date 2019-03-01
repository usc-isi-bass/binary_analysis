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
char s[1000];
gets(s);
getchar();
int i,a[300]={0},k=0;
for(i=0;i<strlen(s);i++){
                         if(s[i]!=' '){
                       a[k]++;  
                       }
                       if(s[i]==' '){
                                     k++;
                                    
                         }
                         }
 i=1;
 printf("%d",a[0]);
 getchar();
 while(i<=k){
             if(a[i]==0){
                i++;
             }else{
                printf(",%d",a[i]);getchar();
                i++;
                }

                }      
    return 0;
} 