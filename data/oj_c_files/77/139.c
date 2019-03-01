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

int k,n;

char str[1000],c1,c2;

int main(){
    int i,j,t=1;
    scanf("%s",str);
    n=strlen(str);
    c1=str[0];
    c2=str[n-1];
    
    for(i=t;i<n;i++){
        if(str[i]==c2){
            for(j=i-1;j>=0;j--){
                if(str[j]==c1){
                    printf("%d %d\n",j,i);
                    str[i]=' ';
                    str[j]=' ';
                    break;
                }
            }
        }
        t++;
    }
//scanf("%d",&k);
return 0;
}
