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

main()
{
	int w,i,j,k,c=0;
	scanf("%d",&w);
	c=7+w;
	if(c%7==0)
		printf("1\n");
	for(i=1;i<12;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)
			c=c+31;
		if(i==4||i==6||i==9||i==11)
			c=c+30;
		if(i==28)
			c=c+28;
		if(c%7==0)
			printf("%d\n",i+1);
	}
	return 0;
}

