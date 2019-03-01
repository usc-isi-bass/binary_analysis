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
    int n,i,l,k;
    char zfc[50][33];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",zfc[i]);
        l=strlen(zfc[i]);
      
        if(zfc[i][l-1]=='r'||zfc[i][l-1]=='y'){
           for(k=0;k<l-2;k++){
                printf("%c",zfc[i][k]);
                if(k==l-3){printf("\n");}
            }
        }
         if(zfc[i][l-1]=='g'){
            for(k=0;k<l-3;k++){
                printf("%c",zfc[i][k]);
                if(k==l-4){printf("\n");}
            }
        }
    }
    return 0;
    }



