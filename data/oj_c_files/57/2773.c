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
    int i,j,n,len;
    char zfc[33];
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        gets(zfc);
        len=strlen(zfc);
        if(zfc[len-1]=='r'){
            if(zfc[len-2]=='e'){
                
                zfc[len-2]='\0';
            }
        }else if(zfc[len-1]=='g'){
            if(zfc[len-2]=='n'){
                if(zfc[len-3]=='i'){
                     zfc[len-3]='\0';
                    
                }
            }
        }else if(zfc[len-1]=='y'){
            if(zfc[len-2]=='l'){
              
                zfc[len-2]='\0';
        }
    }
    printf("%s\n",zfc);
    }
   
    return 0;
}

