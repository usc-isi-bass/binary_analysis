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
    int n,i,k,m;
    char a[50][33],b[50][33];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",a[i]);
       k=strlen(a[i]);
       if(a[i][k-1]=='r'||a[i][k-1]=='y'){
         for(m=0;m<k-2;m++){
         b[i][m]=a[i][m];
         }
         b[i][k-2]='\0';
       }
       else if(a[i][k-1]=='g'){
           for(m=0;m<k-3;m++){
               b[i][m]=a[i][m];
           }
           b[i][k-3]='\0';
       }
       printf("%s\n",b[i]);
    }
    return 0;
}
