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
   char s[1000][256];
   int n,i,k;
   scanf("%d",&n);
   for(i=0;i<n;i++){
        scanf("%s",s[i]);
        for(k=0;s[i][k]!='\0';k++){
           if(s[i][k]=='T'){
               s[i][k]='A';
           }else if(s[i][k]=='A'){
               s[i][k]='T';
           }else if(s[i][k]=='C'){
               s[i][k]='G';
           }else if(s[i][k]=='G'){
               s[i][k]='C';
           }
		}
    }
    for(i=0;i<n-1;i++){
         printf("%s\n",s[i]);
    }
    printf("%s",s[n-1]);
    return 0; 
}