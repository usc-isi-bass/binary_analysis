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

int main(){
	int n,i,k,j;
	int result;
	int zcs;
	int m,cs[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		result=0;
		scanf("%d",&m);
		if(m==0){
			zcs=60;
		}
		for(k=0;k<m;k++){
			scanf("%d",&cs[k]);
			for(j=m-1;j>=0;j--){
			result=cs[j]+(j+1)*3;
				if(result<=60){
				zcs=60-3*(j+1);
				break;
			}else if(result>60&&(result-3)<60){
					zcs=cs[j];
					break;
			}
			}
		}

				
		printf("%d\n",zcs);
	}
	return 0;
}