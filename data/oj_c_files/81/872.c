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
	int sz[5][5],a[5][5];
	int j,k,n,m;
	for(j=0;j<5;j++){
		for(k=0;k<5;k++){
			scanf("%d",&sz[j][k]);
		}
	}
	scanf("%d %d",&n,&m);
	if((n<5)&&(m<5)){
		for(k=0;k<5;k++){
			a[n][k]=sz[n][k];
			sz[n][k]=sz[m][k];
			sz[m][k]=a[n][k];
		}
		for(j=0;j<5;j++){
			for(k=0;k<5;k++){
				if(k==0){
					printf("%d",sz[j][k]);
				}else if(k==4){
					printf(" %d\n",sz[j][k]);
				}else{
					printf(" %d",sz[j][k]);
				}
			}
		}
	}else{
		printf("error");
	}
	return 0;
}

	