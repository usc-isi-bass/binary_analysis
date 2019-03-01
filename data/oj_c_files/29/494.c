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
int m,n,a,b,e;
double s=0;
scanf("%d",&m);
for(int i=1;i<=m;i++){
    scanf("%d",&n);
	a=1;
	b=2;
	for(int j=1;j<=n;j++){
        s=s+1.0*b/a;
        e=a;
		a=b;
		b=e+a;
	}
	printf("%.3lf\n",s);
	s=0;
}
return 0;
}