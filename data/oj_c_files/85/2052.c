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
    char s[21];
    int n,i,j;
    int b[100]={0};
    scanf("%d",&n);
  
    for(i=0;i<n;i++){
    scanf("%s",s);
    for(j=0;j<strlen(s);j++){
        if(s[j]=='_'||(s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9'&&j>0)){
            continue;
        }else{
            b[i]=1;
            break;
        }
    }
    }
    for(i=0;i<n;i++)  {
    if(b[i]==0){
        printf("yes\n");
    }else{
        printf("no\n");
    }
    }   
    return 0;
}

