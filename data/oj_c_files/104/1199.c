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
	int x,y;
	scanf("%d %d",&x,&y);
	int xi,yj;
	int i,j;
	for(i=0;i<15;i++)
	{
		xi=x/(pow(2,i));
		for(j=0;j<15;j++)
		{
			yj=y/(pow(2,j));
			if(yj==xi)
			{	printf("%d\n",yj);
			break;
			}
		}
		if(yj==xi)
			break;
	}
	return 0;

}
