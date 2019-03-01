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
    int n,m=0,i,j;
    char sz[N];
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%s",sz);
    if((sz[0]=='_')||(sz[0]>='A'&&sz[0]<='Z')||(sz[0]>='a'&&sz[0]<='z')){
        for(i=1;sz[i];i++){
        if((sz[i]=='_')||(sz[i]>='0'&&sz[i]<='9')||(sz[i]>='a'&&sz[i]<='z')||(sz[i]>='A'&&sz[i]<='Z')){
            continue;
        }else m++;
    }if(m!=0){
        m=0;
        puts("no");
        }else{
            puts("yes");
        }
    }else {puts("no");
    }}return 0;
}


