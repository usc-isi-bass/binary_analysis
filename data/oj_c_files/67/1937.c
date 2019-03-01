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
	int n,i;
	scanf("%d",&n);
	int sz[100][2];
	double xl[100];
	for(i=0;i<n;i++){
		scanf("%d%d",&sz[i][0],&sz[i][1]);
		xl[i]=(double)sz[i][1]/sz[i][0];
	}
	for(i=1;i<n;i++){
		if(xl[i]-xl[0]>0.05){
			printf("better\n");
		}else if(xl[0]-xl[i]>0.05){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}