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
	int sz[100];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
	int maxIndex, e;
for(int k  =   1  ;   k <=  n; k++){
	maxIndex = 0;
	for(int i = 0; i <= n-k; i++){
			if(sz[i] > sz[maxIndex]){
					maxIndex = i;
			}
	}	
	if(maxIndex != n-k){
		e = sz[maxIndex];
		sz[maxIndex] = sz[n-k];
		sz[n-k] =  e;
	}
}
 printf("%d\n",sz[n-1]);
		printf("%d\n",sz[n-2]);
	return 0;
}
