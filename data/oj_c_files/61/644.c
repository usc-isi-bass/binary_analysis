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
int n,a,sz[30],i,j,t,e;
i=1;
j=1;
sz[0]=1;
sz[1]=1;
for(t=2;t<30;t++){
	sz[t]=i+j;
	e=i;
	i=i+j;
	j=e;
}
scanf("%d",&n);
for(t=0;t<n;t++){
	scanf("%d",&a);
	printf("%d\n",sz[a-1]);
}
return 0;
}