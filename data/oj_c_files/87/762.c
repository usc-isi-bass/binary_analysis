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
	int a[100],b[100],c[100],d[100],e[100],f[100];
	int sum[100];
	int i,t=0,k,l;
	for(i=0;;i++){
		scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0){
			break;
		}
		t++;	
	}
	for(i=0;i<t;i++){
		sum[i]=f[i]+60*e[i]+(d[i]-a[i]+11)*3600+60-c[i]+(59-b[i])*60;
	}
	for(i=0;i<t;i++){
		printf("%d\n",sum[i]);
	}
	return 0;
}



	





	
