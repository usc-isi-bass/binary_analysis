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

int main()
{
	int a[100],b[100],c[100],d[100],e[100],f[100],i,t[100],n=0;
	for(i=0;i<100;i++){
		scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]+b[i]+c[i]+d[i]+e[i]+f[i]!=0){
			t[i]=(12-a[i]+d[i])*3600+(e[i]-b[i])*60+(f[i]-c[i]);
			n++;
		}
		else{
			break;
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",t[i]);
	}
	return 0;
}