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
int n,a;
scanf("%d ",&n);
int sz[n];
for(int i=0;i<n;i++){
scanf("%d",&sz[i]);
}
for(int k=0;k<(n/2);k++){
a=sz[n-1-k];
sz[n-1-k]=sz[k];
sz[k]=a;
}
for(int k=0;k<n-1;k++){
	printf("%d ",sz[k]);
}
printf("%d",sz[n-1]);
return 0;
}