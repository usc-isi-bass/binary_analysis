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
	int a[1000],b[1000],c[1000],d[1000],e[1000],f[1000];
	int i,x,y;
	x=0;
	for(i=0;i<10000;i++){
	scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	x=i;
	  if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
		break;
	  }
	}
	for(i=0;i<x;i++){
        y=60-c[i]+f[i]+60*(60-b[i]+e[i]-1)+60*60*(d[i]+12-a[i]-1);
		printf("%d\n",y);

	}
	
	
	
	return 0;
}