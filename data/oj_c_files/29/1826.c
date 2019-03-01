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
	int m,n[100],i,j;
	float s,r[100];
	scanf("%d",&m);
	for(i=1;i<=m;i++){
		scanf("%d",&n[i]);
	}
	for(i=1;i<=m;i++){
		r[i]=0;
		s=1.0;
			for(j=1;j<=n[i];j++){
				
					s=1.0+1.0/s;
					r[i]=r[i]+s;
			}
			printf("%.3f\n",r[i]);
	}
	return 0;
}