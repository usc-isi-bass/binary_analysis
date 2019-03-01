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

void main(){
	int n,a[20000],i,j,c;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
    }
	printf("%d",a[0]);
	for(i=1;i<=n-1;i++){
		for(j=0,c=0;j<i;j++){
			if(a[i]!=a[j]) c++;
		} 
		if(c==i) printf(" %d",a[i]);
	}
}