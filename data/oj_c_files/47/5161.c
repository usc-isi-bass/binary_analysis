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
	int n;
	scanf("%d",&n);
	int sz[98];
	int i=0;
	while(i<n){
		scanf("%d",&(sz[i]));
		i ++;
	}
	
		int a;
		int j=0;
		while(j<=(n/2)-1){
			a = sz[n-j-1];
			sz[n-j-1] = sz[j];
			sz[j] = a;
			j ++;
		}
	
	
	int l=0;
	while(l<n-1){
		printf("%d ",sz[l]);
		l ++;
	}
	printf("%d",sz[n-1]);
	return 0;
	
}