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
    char u[60][33],a[60][33];
    int n,j,m=0,k;
    scanf("%d",&n);
    
    for(j=0;j<n;j++){
    scanf("%s",u[j]);
}

for(j=0;j<n;j++){
                 
     m=strlen(u[j]);
    if(u[j][m-1]==103){                                         
    if(u[j][m-2]==110){ 
    if(u[j][m-3]==105){
                   for(k=0;k<m-3;k++){
                   a[j][k]=u[j][k];
                   }
                    }
                    }
                    }else if(u[j][m-1]==121){
    if(u[j][m-2]==108){
    for(k=0;k<m-2;k++){
                   a[j][k]=u[j][k];
                   }
                    }
                    }else{
    for(k=0;k<m-2;k++){
                   a[j][k]=u[j][k];
                    }
                    }
}
for(j=0;j<n;j++){
printf("%s\n",a[j]);
}
return 0;
}