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

int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	struct{
		double x,y;
	}s[20];
	double max=0;
	int i,k;
	for(k=0;k<n;k++){
		scanf("%lf%lf",&s[k].x,&s[k].y);
	}
	for(i=1;i<n;i++){
		for(k=0;k<i;k++){
			if(max<sqrt((s[k].x-s[i].x)*(s[k].x-s[i].x)+(s[k].y-s[i].y)*(s[k].y-s[i].y)))
				max=sqrt((s[k].x-s[i].x)*(s[k].x-s[i].x)+(s[k].y-s[i].y)*(s[k].y-s[i].y));
		}
	}
	printf("%.4lf",max);
	return 0;
}
