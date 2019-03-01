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
	int k=0,h,i;
	for(i=0;i<100;i++){
		scanf("%d %d %d %d %d %d\n",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
			k++;
		if(a[i]==0)
			break;
	}
	for(i=0;i<k-1;i++){
	    h=(3600*(d[i]+12))+(60*e[i])+f[i]-(3600*a[i])-(60*b[i])-c[i];
		printf("%d\n",h);
	}
	return 0;
}