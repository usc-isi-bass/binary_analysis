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
    int i,j,n,m,k;
    scanf("%d",&n);
    char d[10];
    gets(d);
    char a[n][1000];
    for(i=0;i<n;i++)gets(a[i]);
    for(i=0;i<n;i++){
       int c,d=0;
       c=strlen(a[i]);
       int b[c];for(m=0;m<c;m++)b[m]=0;
       for(j=0;j<c;j++){
          for(k=0;k<c;k++){
             if(a[i][j]==a[i][k])b[j]++;
             }
          if(b[j]==1){
            printf("%c\n",a[i][j]);
            break;
            }
          }
       for(m=0;m<c;m++){
          if(b[m]==1)d=1;
          }
       if(d==0)printf("no\n");
       }
    scanf("%d",n);
    return 0;
}
