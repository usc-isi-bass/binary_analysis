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
	int n,i;
	int p[100],pcu[100];
	double per[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&p[i],&pcu[i]);
		per[i]=(double)pcu[i]/p[i]*100;
	}
	for(i=1;i<n;i++){
		if(per[i]-per[0]>5) printf("better\n");
		else if(per[0]-per[i]>5) printf("worse\n");
		else printf("same\n");
	}
	

	return 0;
}
