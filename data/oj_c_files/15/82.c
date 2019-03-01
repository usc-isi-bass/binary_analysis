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

int main (){
	int n,i,m,a=0,t;
	scanf("%d",&n);
	for (i=1;i<=n*n;i++)

	{scanf("%d",&m);
	if (m==0)
		a=a+1;
	}
	
	t=(a+4)/4;
	printf("%d",(t-2)*(t-2));
	return 0;
}