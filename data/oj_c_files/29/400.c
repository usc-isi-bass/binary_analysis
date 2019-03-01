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


int main(int argc, char* argv[])
{
	int m,sz[100],i,sl[500],j;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&sz[i]);
	}
	sl[0]=1;
	sl[1]=2;
	for(i=2;i<500;i++){
		sl[i]=sl[i-1]+sl[i-2];
	}
	double fs[500],sum[500]={0};
	for(i=0;i<500;i++){
		fs[i]=(double)sl[i+1]/sl[i];
	}
	for(i=0;i<m;i++){
		for(j=0;j<sz[i];j++){
			sum[i]=fs[j]+sum[i];
		}
		printf("%.3lf\n",sum[i]);
	}

	

	return 0;
}
