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

void main()
{
	int n,a,max,sec,i,x;
	scanf("%d",&n);
	scanf("%d",&x);
	max=x;
	sec=x;
	for (i=2;i<=n;i++){
		scanf("%d",&x);
		if (x>=max)
			max=x;
		if ((x<max)&&(x>=sec))
			sec=x;}
	printf("%d\n",max);
	printf("%d\n",sec);
}