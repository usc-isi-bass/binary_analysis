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

int a;
int res;
int sum;
void dfs(int cnt){
    if(cnt*sum==a){res++; return;}
    if(cnt*sum<a){
        sum*=cnt;
        int j=a/sum;
        for(int i=cnt;i<=j;i++)
            dfs(i);
        sum/=cnt;
        return;
    }
}
int main(){
    int nCases;
    scanf("%d",&nCases);
    for(int i=0;i<nCases;i++){
        scanf("%d",&a);
        res=0; sum=1;
        for(int i=2;i<=a;i++)  dfs(i);
        printf("%d\n",res);
    }
    return 0;
}