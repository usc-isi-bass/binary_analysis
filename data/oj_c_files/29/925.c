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
	int n,m,k,i,sz1[1000],sz2[1000];
	double x[1000]={0};
	sz1[0]=2;
	sz1[1]=3;
	sz2[0]=1;
	sz2[1]=2;
	scanf("%d",&n);
	for(i=0;i<100;i++){
		sz1[i+2]=sz1[i]+sz1[i+1];
		sz2[i+2]=sz2[i]+sz2[i+1];
	}
	for(i=0;i<n;i++){
		scanf("%d",&m);
		for(k=0;k<m;k++){
			x[i]=x[i]+(double)sz1[k]/sz2[k];
		}
	}
	for(i=0;i<n;i++){
		printf("%.3lf\n",x[i]);
	}
}

