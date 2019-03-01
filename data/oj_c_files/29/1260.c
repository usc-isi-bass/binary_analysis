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
	int i,j,m;
	int d[100];
	double a,b,e,s=0;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		a=2.0;b=1.0;
		scanf("%d",&d[i]);
		for(j=0;j<d[i];j++){
			s+=a/b;
			e=b;
			b=a;
			a=a+e;
		}
		printf("%.3lf\n",s);
		s=0;
	}
	return 0;
}