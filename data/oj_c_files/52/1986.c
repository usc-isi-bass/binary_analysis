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

int main () {
int n,m;
scanf("%d%d",&n,&m);
int sz[100];
for(int i=m;i<=n-1;i++){scanf("%d",&(sz[i]));}
for(int j=0;j<=m-1;j++){scanf("%d",&(sz[j]));}
for(int p=0;p<=n-1;p++){
	if(p==n-1){printf("%d",sz[p]);}
	else {printf("%d ",sz[p]);}
}
return 0;
}