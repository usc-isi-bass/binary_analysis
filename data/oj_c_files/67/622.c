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
	int n=0;
	int i=0;
	float zs_1=0,yx_1=0;
	float zs=0,yx=0;
	scanf("%d",&n);
	scanf("%f%f",&zs_1,&yx_1);
	for(i=1;i<n;i++)
	{
		scanf("%f%f",&zs,&yx);
		if((yx_1/zs_1-yx/zs)>0.05)
			printf("worse\n");
		else if((yx/zs-yx_1/zs_1)<0.05)
			printf("same\n");
		else
			printf("better\n");
		yx=0;
		zs=0;
	}
}

