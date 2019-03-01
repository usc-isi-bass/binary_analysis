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

int factor(int N, int min){
	int result=1, i;
	if(N<min)
	return 0;
	for(i=min;i<N;i++){
		if(N%i==0){
			result+=factor(N/i,i);
			}
		}
	return result;
	}
int main(){
	int n,m,j,re;
	scanf("%d",&n);	
	for(j=0;j<n;j++){
		scanf("%d",&m);
		re=factor(m,2);
		printf("%d\n",re);
		}
	scanf("%d",&n);
	return 0;
	}
