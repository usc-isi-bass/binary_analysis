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
    char str[256];
    int n,i;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        scanf("%s",str);
        for(i=0;str[i]!='\0';i++){
            if(str[i]=='A'){
                str[i]='T';
            } else if(str[i]=='T'){
                str[i]='A';
            } else if(str[i]=='C'){
                str[i]='G';
            }else if(str[i]=='G'){
                str[i]='C';
            }
            if(str[i+1]!='\0'){
                printf("%c",str[i]);
            }
            if(str[i+1]=='\0'){
                printf("%c\n",str[i]);
            }
        }
    }
    return 0;
}







