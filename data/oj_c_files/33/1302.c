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
    int n,i,j;
    char s[10000][260];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      scanf("%s",s[i]);
                     }
    for(i=1;i<=n;i++){
      for(j=0;s[i][j]!='\0';j++){
        if(s[i][j]=='A'){
           s[i][j]='T';
                      }
        else if(s[i][j]=='C'){
           s[i][j]='G';
                          }
        else if(s[i][j]=='G'){
           s[i][j]='C';
                          }                
        else if(s[i][j]=='T'){
           s[i][j]='A';
                          }             
                            }
         printf("%s\n",s[i]);  
                     }   
      return 0;
    }