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
    int n,a;
    char zfc[201];
    gets(zfc);
    n=strlen(zfc);
    for(int i=0;i<n;i++){
        if(zfc[i]==' '){
            a=0;
            for(int k=i+1;k<n;k++){
                if(zfc[k]==' '){
                    a++;
                }
                else{
                    break;
                }
            }
            for(int k=i+a+1;k<n;k++){
                zfc[k-a]=zfc[k];
            }
            n-=a;
        }
    }
    for(int i=0;i<n;i++){
        printf("%c",zfc[i]);
    }
    return 0;
}
