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
    int s[500]={0},i,k,x;
    char d[10000];
    gets(d);
    k=0;
    for(i=0;d[i]!=0;i++){
        if(d[i]!=' '){
            s[k]++;
        }else{
            k++;
            s[k]=0;
        }
    }
    for(x=0;x<=k;x++){
        if(x==0&&s[x]!=0){
            printf("%d",s[x]);
        }
        if(x>0&&s[x]!=0){
            printf(",%d",s[x]);
        }
    }
    return 0;
}
