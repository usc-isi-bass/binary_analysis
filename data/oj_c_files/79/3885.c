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

int f(int m,int n){
    int i,k=0;
    for(i=2;i<=n;i++)
    k=((m%i)+k)%i;
    return k;
}
int main(void){
int a[300][2],i;
for(i=0;i<300;i++){
scanf("%d%d",&a[i][0],&a[i][1]);
if(a[i][0]==0) break;
else printf("%d\n",f(a[i][1],a[i][0])+1);
}
return 0;
}

