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
    int n,l;
    scanf("%d",&n);
    char bg[60][40];
    for(int i=0;i<n;i++){
        scanf("%s",bg[i]);
    }
    for(int i=0;i<n;i++){
        l=strlen(bg[i]);
        if(strcmp(&bg[i][l-3],"ing")==0){
            bg[i][l-3]='\0';
        }else if(strcmp(&bg[i][l-2],"er")==0||strcmp(&bg[i][l-2],"ly")==0){
            bg[i][l-2]='\0';
        }
    }
    for(int i=0;i<n;i++){
    printf("%s\n",bg[i]);
    }
    return 0;
}