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
	int a[100],b[100],c[100],d[100],e[100],f[100],i=0,n[100],j;
	scanf("%d %d %d %d %d %d",&a[0],&b[0],&c[0],&d[0],&e[0],&f[0]);
	while(a[i]!=0){
		n[i]=3600*(12+d[i]-a[i])+60*(e[i]-b[i])+f[i]-c[i];
		i++;
		scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	}
	for(j=0;j<i;j++){
		printf("%d\n",n[j]);
	}
	return 0;
}