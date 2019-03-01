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
	int x,y;
	scanf("%d %d",&x,&y);
	int i=x,j=y;
	while(i!=0&&j!=0)
	{
		if(i==j)
			break;
		else if(i>j)
			i=i/2;
		else
			j=j/2;
	}
	printf("%d\n",i);
}