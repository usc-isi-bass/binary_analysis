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
	int a[100],b[100],c[100],d[100],e[100],f[100],n[100],t=0,i;
	for(i=0;i<100;i++){
	scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	t++;
	if(a[i]==0)
		break;
	}
	for(i=0;i<t-1;i++){
	n[i]=3600*(d[i]+12-a[i])+60*(e[i]-b[i])+(f[i]-c[i]);
	printf("%d\n",n[i]);
	}
	return 0;
	}