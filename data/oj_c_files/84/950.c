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
	int sz[100];
	int i,n,a,b,k,s;
	scanf("%d\n",&n);
	if (n>1&&n<100){
	for(i=0;i<n;i++){
		scanf("%d",&(sz[i]));
	}
	for(k=0;k<n-1;k++)
		if(sz[k]>sz[k+1]){
			a=sz[k+1];
			sz[k+1]=sz[k];
			sz[k]=a;
		}
    for(s=0;s<n-2;s++)
		if(sz[s]>sz[s+1]){
			b=sz[s+1];
            sz[s+1]=sz[s];
			sz[s]=b;
		}
	}
	printf("%d\n%d\n",sz[n-1],sz[n-2]);
	return 0;
}
