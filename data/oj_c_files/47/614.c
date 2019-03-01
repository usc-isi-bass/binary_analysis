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

void jiaohuan(int*,int*);
int main(){
	int yuan[101];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&(yuan[i]));
	}
	for(i=0;i<n/2;i++){
		jiaohuan(&(yuan[i]),&(yuan[n-1-i]));
	}
	for(i=0;i<n-1;i++){
		printf("%d ",yuan[i]);
	}
	printf("%d",yuan[n-1]);
	return 0;
}
void jiaohuan(int*a,int*b){
	int e=*a;
		*a=*b;
		*b=e;
}