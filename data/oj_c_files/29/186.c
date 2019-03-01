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
	int m,n[100]={0};
	double sum[100]={0},a=1,b=2,c=0;
	scanf("%d",&m);
	for (int i=0;i<m;i++){
		scanf("%d",&n[i]);
		a=1;
		b=2;
		for(int k=0;k<n[i];k++){
			sum[i]+=b/a;
			c=b;
			b=a+b;
			a=c;
		}
		printf("%.3lf\n",sum[i]);
	}
	return 0;
}