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

char s[MLEN][MAX];
int i,j,n;
int main(){
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        scanf("%s",s[i]);
    }
    for(i=0;i<=n-1;i++){
        int a=1;
        for(j=0;s[i][j]!='\0';j++){
            if(!((s[i][j]=='_')||(s[i][j]>='A'&&s[i][j]<='Z')||(s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]>='0'&&s[i][j]<='9'&&j>0))){
                a=0;
                break;
            }
        }
        if(a==1){
            printf("yes\n");
        }else if(a==0){
            printf("no\n");
        }
    }
}