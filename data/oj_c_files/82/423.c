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
	int m,i;
	scanf ("%d",&m);
	int a[101],b[101],c[101];
	for (i=0;i<m;i++){
		scanf ("%d%d",&a[i],&b[i]);
		if (90<=a[i]&&140>=a[i]&&60<=b[i]&&90>=b[i]){
			c[i]=1;
		}
		else {
			c[i]=0;
		}
	}
	int q=0,p=0;
	for (i=0;i<m;i++){
		if (c[i]==1){
			p++;
		}
		if (p>q){
			q=p;
		}
		if (c[i]==0){
			p=0;
			continue ;
		}
	}
	printf ("%d",q);
	return 0;
}
