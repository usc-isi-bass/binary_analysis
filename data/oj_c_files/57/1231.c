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
    int n,i,j,LEN;
    scanf("%d",&n);
    char zf[33],jg[33];
    for(i=0;i<n;i++){
        scanf("%s",zf);
        LEN=strlen(zf);
        for(j=0;j<LEN;j++){
            if(j==LEN-3&&zf[j+2]=='g'){
                zf[j]=0;
                zf[j+1]=0;
                zf[j+2]=0;
                break;
            }else if((j==LEN-2&&zf[j+1]=='y')||(j==LEN-2&&zf[j+1]=='r')){
                zf[j]=0;
                zf[j+1]=0;
                break;
            }
        }
        LEN=strlen(zf);
        for(j=0;j<LEN;j++){
            if(zf[j]!=0){
                jg[j]=zf[j];
            }
        }
        jg[j]='\0';
        printf("%s\n",jg);
        for(j=0;j<LEN;j++){
            jg[j]=0;
        }
    }
    return 0;
}