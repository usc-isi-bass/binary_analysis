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
	int n,i,j,k,a[10000],b[30],c[10000];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
    for (i=0;i<n;i++){
		for (j=0;j<a[i];j++){
			b[0]=1;
			b[1]=1;
			b[j+2]=b[j]+b[j+1];
			c[i]=b[j];
		}
	}
	for (k=0;k<n;k++){
	    printf("%d\n",c[k]);
	}
	return 0;
}
