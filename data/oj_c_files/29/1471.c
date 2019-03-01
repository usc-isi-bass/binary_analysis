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
	int m,n,i,k;
	double a,b,s=0,e;
	scanf("%d",&m);
	
	a=1;
	b=2;
	for(i=0;i<m;i++){
		scanf("%d",&n);
		for(k=0;k<n;k++){
			s=s+b/a;
			e=a;
			a=b;
			b=a+e;
		}
				a=1;
				b=2;
				
				printf("%.3lf\n",s);
			
		s=0;
	
	}

	return 0;
}