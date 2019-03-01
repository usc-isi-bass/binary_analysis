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
	int n,i,j,m;
	double a[1001],ans,pfh,ave,*p;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&m);
		p=&a[0];
		ave=0;
		pfh=0;
		for(j=1;j<=m;j++){
			scanf("%lf",(p+j));
			ave+=*(p+j);
		}
		ave/=m;
		for(j=1;j<=m;j++){
			pfh+=pow(*(p+j)-ave,2);
		}
		pfh/=m;
		ans=sqrt(pfh);
		printf("%.5lf\n",ans);
	}
	
	return 0;
}

