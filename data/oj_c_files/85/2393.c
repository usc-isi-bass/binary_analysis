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
    int n,i,l,m=0,j;
    char zfc[21];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",zfc);
        l=strlen(zfc);
        if((zfc[0]>='a'&&zfc[0]<='z')||(zfc[0]>='A'&&zfc[0]<='Z')||(zfc[0]=='_')){
            for(j=1;j<l;j++){
            if(!((zfc[j]>='a'&&zfc[j]<='z')||(zfc[j]>='A'&&zfc[j]<='Z')||(zfc[j]=='_')||(zfc[j]>='0'&&zfc[j]<='9'))){
                puts("no");
                break;
                }
                if(j==l-1){
                    puts("yes");
                }
            }
        }else puts("no");
    }

    return 0;
}






