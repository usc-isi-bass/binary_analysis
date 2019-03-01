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


int re(int w,int r,int time);
int main(int argc, char* argv[])
{
	int n,n1,i,j;
	double sz[100],x=0,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&n1);
		for(j=0;j<n1;j++){
			scanf("%lf",&sz[j]);
		}
		for(j=0;j<n1;j++){
			x+=sz[j];
		}
		x/=n1;
		for(j=0;j<n1;j++){
			s+=(sz[j]-x)*(sz[j]-x);
		}
		s/=n1;
		s=pow(s,0.5);
		printf("%.5f\n",s);
		x=0;
		s=0;
	}
	return 0;
}
