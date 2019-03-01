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
	int a[500][15];
	int i,j,t,number;
	for(i=0;;i++){
		number=0;
		scanf("%d",&a[i][0]);
		if(a[i][0]==-1){
			break;
		}
		for(j=1;;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]==0){
				printf("%d\n",number);
				break;
			}
			for(t=0;t<j;t++){
				if(a[i][j]*2==a[i][t]){
					number++;
					break;
				}
				if(a[i][j]==a[i][t]*2){
					number++;
				}
			}
		}
	}
	return 0;
}