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
    int n,i,p,s,flag;
    char zfc[21];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",zfc);
        s=strlen(zfc);
        if((zfc[0]>='A'&&zfc[0]<='Z')||(zfc[0]>='a'&&zfc[0]<='z')||zfc[0]=='_'){
            for(p=1;p<s;p++){if((zfc[p]>='A'&&zfc[p]<='Z')||(zfc[p]>='a'&&zfc[p]<='z')||zfc[p]=='_'||(zfc[p]>='0'&&zfc[p]<='9')){flag=1;}
            else {flag=0;break;}}      
    }else{flag=0;}
    if(flag==1){printf("yes\n");}else{printf("no\n");}}
    return 0;
}
