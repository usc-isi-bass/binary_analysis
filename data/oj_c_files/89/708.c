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

int to[10005],from[10005];
int n;
int main(){
	int k1,k2,i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		to[i]=0;
		from[i]=0;
	}
	while (true) {
		scanf("%d %d",&k1,&k2);
		if (k1==0&&k2==0) break; 
		to[k2]++;
		from[k1]++;
	}
	int t=-1;
	for (i=0;i<n;i++) {
		if (to[i]==n-1&&from[i]==0) {
			printf("%d\n",i);
			t=i;
		}
	}
	if (t<0) printf("NOT FOUND\n");
	return 0;
}
