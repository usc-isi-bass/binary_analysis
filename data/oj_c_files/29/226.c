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
	int n,i,num;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num);
		int j,a=1,b=2,c=3;
		double sum=0,shu;
		for(j=1;j<=num;j++){
			if(j==1) shu=(double)b/a;
			if(j==2) shu=(double)c/b;
			if(j>2){
				a=c+b,b=c,c=a;
				shu=(double)c/b;
			}
			sum+=shu;
		}
		printf("%0.3lf\n",sum);
	}
	return 0;
}
