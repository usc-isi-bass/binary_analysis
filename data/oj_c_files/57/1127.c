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
    int n,i,k,j;
    int m;
    scanf("%d",&n);
    char dc[50];
    for(i=0;i<n;i++){
        scanf("%s",dc);
       // printf("%s",dc);
       m=strlen(dc)-1;
     //printf("%d",m);
     if(dc[m]=='g'){
         dc[m-2]=0;
     }
     else dc[m-1]=0;
    
    printf("%s\n",dc);
    }
    
}

