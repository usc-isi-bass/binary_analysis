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
char A[1000][300],B[300]={'\0'};
int n,a,i,b;
scanf("%d",&n);
for(i=0;i<n;i++){
   scanf("%s",A[i]);
   a=strlen(A[i]);
   for(b=0;b<a;b++){
       if(A[i][b]=='T'){
         B[b]='A';}
else if(A[i][b]=='A'){
         B[b]='T';} 
else if(A[i][b]=='G'){
         B[b]='C';} 
else if(A[i][b]=='C'){
         B[b]='G';}
      }
    B[b]='\0';
    printf("%s\n",B);
   }
return 0;
}