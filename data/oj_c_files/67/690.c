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
	int n,s1,e1,s2,e2,i,t=0;
	double x1,x2,c1,c2;
	scanf("%d",&n);
	scanf("%d%d",&s1,&e1);
	x1=(double)e1/s1;
	for(i=0;i<n-1;i++){
		t=0;
		scanf("%d%d",&s2,&e2);
		x2=(double)e2/s2;
		c1=x1-x2;
		c2=x2-x1;
		if(c2>0.05){
			printf("better\n");
			t=1;
		}
		if(c1>0.05){
			printf("worse\n");
			t=1;
		}
		if(t==0){
			printf("same\n");
		}
	}
	return 0;
}