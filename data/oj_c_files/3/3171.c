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
    int a, r;
int n,k,sz[1000];
scanf("%d %d\n",&n,&k);
for(int i=1;i<=n;i++){
   scanf("%d",&sz[i]);
}
for(r=1;r<n;r++){
 for(a=r+1;a<=n;a++){
    if(sz[a]+sz[r]==k){
    printf("yes");
    break;
   }
    }
   if(a<=n)
   break;
}
    if(r>=n)
    printf("no");
return 0;
}

