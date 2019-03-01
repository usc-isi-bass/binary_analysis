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
    int n,i,j,len;
    scanf("%d",&n);
    char jjd[n][LEN],pdl[n][LEN];
    for(i=0;i<n;i++){
         for (j=0;j<LEN;j++) pdl[i][j]='\0';
        scanf("%s",jjd[i]);
        len=strlen(jjd[i]);
        for(j=0;j<len;j++){
            if(jjd[i][j]=='A'){
                pdl[i][j]='T';}
            else {if(jjd[i][j]=='T'){
                pdl[i][j]='A';}
            else {
                if(jjd[i][j]=='G'){
                    pdl[i][j]='C';}
            else {
                if(jjd[i][j]=='C'){
                    pdl[i][j]='G';}
            }}}
        }
        printf("%s\n",pdl[i]);
    }
   
    
    
    
    
    return 0;
}
