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
    char zfc[1000][1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",zfc[i]);  
for(i=0;i<n;i++){
for(j=0;j<strlen(zfc[i]);j++){
            if(zfc[i][j]=='A'){
                printf("T");
            }
            else if(zfc[i][j]=='T'){
                printf("A");
            }
            else if(zfc[i][j]=='G'){
                printf("C");
            }           
            else if(zfc[i][j]=='C'){
                printf("G");
            }

        }
printf("\n");        

    }
    return 0;
}


