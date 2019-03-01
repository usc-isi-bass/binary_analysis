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
	int b,i,c,d,n,e,j,k,m,a[1000000];
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&b);
	for(k=1;k<=n;k++){
		if(a[k]!=b){
				printf("%d",a[k]);
		break;
		}
	}

	for(j=k+1;j<=n;j++){
			if(a[j]!=b)printf(" %d",a[j]);
	}

	return 0;
}
