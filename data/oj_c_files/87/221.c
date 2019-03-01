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
	int a[100],b[100],c[100],d[100],e[100],f[100],n[100],i,j;
	a[0]=1;
	for(i=1;a[i-1]!=0;i++){
	  scanf("%d %d %d %d %d %d\n",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	  n[i]=(d[i]+11-a[i])*3600+e[i]*60+f[i]+60-c[i]+(60-b[i]-1)*60;
	}
	for(j=1;j<i-1;j++){
	  printf("%d\n",n[j]);
	}
	return 0;
}
