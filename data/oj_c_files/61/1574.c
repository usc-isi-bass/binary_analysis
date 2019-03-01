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

int f(int n);
int main(){
int n,j,a;

scanf("%d",&n);
for(j=0;j<n;j++){
	scanf("%d",&a);
	printf("%d\n",f(a));
}



return 0;
}





int f(int n){
int i,sz[1000],result;
sz[0]=1;
sz[1]=1;
for(i=2;i<=n;i++){
	sz[i]=sz[i-1]+sz[i-2];
}
result=sz[n-1];
return result;
}