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
	int i,n;
	float std;
	float improve;
	int total,ok;
	scanf("%d",&n);
	scanf("%d%d",&total,&ok);
	std=(float)ok/(float)total;
	for(i=0;i<n-1;i++)
	{
		scanf("%d%d",&total,&ok);
		improve=(float)ok/(float)total;
		if(improve-std>0.05) printf("better\n");
		else if(std-improve>0.05) printf("worse\n");
		else printf("same\n");
	}
}

