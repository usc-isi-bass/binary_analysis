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
	int a[300],i,j,b[300],n,e,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		e=0;
		for(j=0;j<n;j++){
			if(a[i]==a[j]&&i>j){
				e=1;
			}
		}
		if(e==0){
			b[k]=a[i];
			k=k+1;
		}
	}
	for(i=0;i<k-1;i++){
		printf("%d",b[i]);
		printf(",");
	}
	printf("%d",b[k-1]);
	return 0;
}