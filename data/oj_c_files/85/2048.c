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
    char s[100][20];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s[i]);
        for(j=0;s[i][j]!='\0';j++){
            if(!((s[i][j]=='_')||(s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]>='A'&&s[i][j]<='Z')||(s[i][j]>='0'&&s[i][j]<='9'&&j>0))){
                break;
            }
        }
        if(s[i][j]=='\0'){
            printf("yes\n");
        }else{printf("no\n");}
    }
    return 0;
}
