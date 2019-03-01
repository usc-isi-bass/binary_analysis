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
int m,q=0;
int n;
double e;
double sz[100];
double b=1.0;
double a=2.0;
double sum=0;
scanf("%d",&m);
for(int i=0;i<m;i++){
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		sum=a/b+sum;
		e=b;
		b=a;
		a=a+e;
	}
	sz[q]=sum;
	q++;
	sum=0;
	b=1.0;
	a=2.0;
}
for(int x=0;x<m;x++){
	printf("%.3lf\n",sz[x]);
}
return 0;
}
