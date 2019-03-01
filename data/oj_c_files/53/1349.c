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
	int n,a[100],i,k,s;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
		for(k=i+1;k<=n;k++){
			if(a[k]==a[i]) a[k]=324235;
	}}
	k=0;
	for(i=1;i<=n;i++){
		if(a[i]!=324235)k+=1;
	}
	s=0;
	for(i=1;i<=n;i++){
		if(a[i]!=324235 && s==k-1){printf("%d",a[i]);break;}
		if(a[i]!=324235){printf("%d,",a[i]);
		s++;}
	}
	return 0;
}

