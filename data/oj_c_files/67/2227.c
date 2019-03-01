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
	int n;
	scanf("%d",&n);
	int a,b;
	scanf("%d%d",&a,&b);
	double p,q;
	p=1.0*b/a;
	int i;
	for(i=1;i<=n-1;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		q=1.0*y/x;
		if(i==n-1){
			if(q-p>0.05){
				printf("better");
			}else if(p-q>0.05){
				printf("worse");
			}else{
				printf("same");
			}
		}else{
			if(q-p>0.05){
				printf("better\n");
			}else if(p-q>0.05){
				printf("worse\n");
			}else{
				printf("same\n");
			}
		}
	}
	return 0;
}