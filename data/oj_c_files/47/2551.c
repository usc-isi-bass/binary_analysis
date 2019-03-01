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
	int n,e,sz[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(int k=1;k<=n;k++){
	for(int i=0;i<n-k;i++){
		e=sz[i];
		sz[i]=sz[i+1];
		sz[i+1]=e;
	}
	}
	for(int j=0;j<n;j++){
		if(j<n-1)
			printf("%d ",sz[j]);
		else
			printf("%d",sz[j]);
	}
	return 0;
}
