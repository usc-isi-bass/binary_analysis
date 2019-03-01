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
scanf("%d",&n);
char a[n][1000];
for(i=0;i<n;i++){
   scanf("%s",a[i]);
   }
for(i=0;i<n;i++){
    for(j=0;a[i][j]!='\0';j++){
       if(a[i][j]=='A'){
          printf("T");
          }
       if(a[i][j]=='C'){
          printf("G");
          }
       if(a[i][j]=='G'){
          printf("C");
          }
       if(a[i][j]=='T'){
          printf("A");
          }
       }
    if(a[i][j]=='\0')
    printf("\n");
    }
scanf("%d",&i);
return 0;
}

