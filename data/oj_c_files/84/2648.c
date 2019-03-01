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
	int i,j,k,t,m,sz[101]={0};
	scanf("%d",&i);
	for(m=0;m<i;m++){
		scanf("%d",&sz[m]);
	}
	for(j=0;j<101;j++){
		for(k=0;k<101;k++){
			if(sz[k]<sz[k+1]){
				t=sz[k];
				sz[k]=sz[k+1];
				sz[k+1]=t;
			}
		}
	}
	printf("%d\n%d\n",sz[0],sz[1]);
	return 0;
}
	