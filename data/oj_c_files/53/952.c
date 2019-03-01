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
	int sz[300];
	for(int i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	printf("%d",sz[0]);
	for(int j=1;j<n;j++){
        int k;
		for(k=0;k<j;k++){
			if(sz[j]==sz[k])
				break;
		}
		if(k==j){
			printf(",%d",sz[j]);
		}
		else
			continue;
	}
	return 0;
}
