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
    int a[1000],b[1000],c[1000],d[1000],e[1000],f[1000];
	int i,n,s[1000];
	for(i=0;i<1000;i++){
		scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0){
			n=i;
			break;
		}
	}
	for(i=0;i<n;i++){
			d[i]=d[i]+12;
	}
	for(i=0;i<n;i++){
		if(f[i]<c[i]){
			f[i]=f[i]+60;
			e[i]=e[i]-1;
		}
	}
	for(i=0;i<n;i++){
		if(e[i]<b[i]){
			e[i]=e[i]+60;
			d[i]--;
		}
		s[i]=(d[i]-a[i])*3600+(e[i]-b[i])*60+(f[i]-c[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\n",s[i]);
	}
    return 0;
}
