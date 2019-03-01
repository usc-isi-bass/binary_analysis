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
    int n;
    char str[21];
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        scanf("%s",str);
        for(int i=0;str[i]!='\0';i++){
            if(i==0){
                if(((str[i]>='a')&&(str[i]<='z'))||((str[i]>='A')&&(str[i]<='Z'))||(str[i]=='_')){
                    continue;
                } else{
                    printf("no\n");
                    break;
                }
            }
            if(i>0){
                if(((str[i]>='a')&&(str[i]<='z'))||((str[i]>='A')&&(str[i]<='Z'))||((str[i]>='0')&&(str[i]<='9'))||(str[i]=='_')){
                    if(str[i+1]!='\0'){
                        continue;
                    } else{
                        printf("yes\n");
                    }
                } else{
                    printf("no\n");
                    break;
                }
            }
        }
    }
    return 0;
}