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
	float sz[100];
	int x,y,z,n,a[100],b[100],sc[100];

    sz[0] = (float)2/1;
	a[0]=2;
	b[0]=1;
	int i=1;
	while(i<100){
		a[i]=a[i-1]+b[i-1];
		b[i]=a[i-1];
        sz[i] = sz[i-1] + (float)(a[i])/(b[i]);
		i++;
	}

	scanf("%d",&n);
	int o,j=0;
	while(j<n){
		scanf("%d",&sc[j]);
		o=sc[j]-1;
		printf("%.3f\n",sz[o]);
		j++;
	}

	return 0;

}