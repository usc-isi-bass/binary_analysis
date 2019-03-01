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
	int sz[100][100],ROW,COL;
	int i,j,z,t;
	scanf("%d %d",&ROW,&COL);
	for(j=0;j<ROW;j++){
		for(i=0;i<COL;i++){
			scanf("%d",&sz[j][i]);
		}
	}
	t=ROW+COL;
	for(z=0;z<t;z++){
		for(j=0;j<ROW;j++){
			i=z-j;
			if((i>=0)&&(i<COL)){
				printf("%d\n",sz[j][i]);
			}
		}
	}
	return 0;
}
