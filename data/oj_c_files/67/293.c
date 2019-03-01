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
	int i,n;
	float a,b,ji,c[100],d[100],qita[100];
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	ji=b/a;
	for(i=0;i<n-1;i++){
		scanf("%f%f",&c[i],&d[i]);
		qita[i]=d[i]/c[i];
	}
	for(i=0;i<n-1;i++){
		if(qita[i]-ji>0.05){
			printf("better\n");
		}else if(ji-qita[i]>0.05){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}


