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
	int m;
	int a[MAX];
	double p[MAX],q[MAX];
	double s[MAX];
	int i,j,n;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++){
			n=a[i];
			p[0]=2;
			q[0]=1;
			s[0]=2;
			for (j=1;j<n;j++){
				p[j]=p[j-1]+q[j-1];
				q[j]=p[j-1];
				s[j]=s[j-1]+p[j]/q[j];
			}
			printf("%.3lf\n",s[n-1]);
	}
	return 0;
}
