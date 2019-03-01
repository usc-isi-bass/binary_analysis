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
	int n,m,s,i;
	double sz[c];
	double p;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&m,&s);
		p=s*1.0/m;
		sz[i]=p;
	}
	for(i=1;i<n;i++){
		p=sz[i]-sz[0];
		if(p<=0.05&&p>=-0.05){
			printf("same\n");
		}
		else if(p>0.05){
			printf("better\n");
		}
		else{
			printf("worse\n");
		}
	}
	return 0;
}