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
	int a[100],b[100],c[100],d[100],e[100],f[100],i=0;
	int s=0;
	scanf("%d%d%d%d%d%d",&a[0],&b[0],&c[0],&d[0],&e[0],&f[0]);
	while(a[i]){
		s+=(d[i]-a[i]+12)*3600+(e[i]-b[i])*60+f[i]-c[i];
		printf("%d\n",s);
		s=0;
		i++;
		scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	}
	return 0;
}

