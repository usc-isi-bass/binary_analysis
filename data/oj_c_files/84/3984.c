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
	int n,m,i;
	scanf("%d",&n);
	int sz[100];
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	int max=sz[0],sec=sz[0];
	for(i=0;i<n;i++){
		if(sz[i]>max){
			max=sz[i];
			m=i;
		}
	}
	sz[m]=-1;
	for(i=0;i<n;i++){
		if(sz[i]>sec){
			sec=sz[i];
		}
	}
	printf("%d\n%d\n",max,sec);
	return 0;
}
