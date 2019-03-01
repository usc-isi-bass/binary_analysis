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

int main () {
	int n,k;
	int flag=0;
	int i;
	scanf("%d",&n);
	int *shuzu=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&shuzu[i]);
	}
	printf("%d",shuzu[0]);
	for(i=1;i<n;i++){
		for(k=0;k<i;k++){
			if(shuzu[i]==shuzu[k]){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf(" %d",shuzu[i]);
			}
		flag=0;
	}
	free(shuzu);
	return 0;

}
