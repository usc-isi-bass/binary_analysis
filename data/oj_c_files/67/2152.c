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
	int i,n,zong,hao;
	double x0,x;

	scanf(" %d",&n);
	scanf(" %d %d",&zong,&hao);
	x0=hao/(zong*1.0);

	for(i=0;i<n-1;i++)
	{
		scanf(" %d %d",&zong,&hao);
		x=hao/(zong*1.0);
		if(x-x0>0.05) printf("better\n");
		else if(x0-x>0.05) printf("worse\n");
		else printf("same\n");
	}
	
	return 0;
}