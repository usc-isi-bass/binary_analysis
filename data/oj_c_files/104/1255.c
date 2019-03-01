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
	int x,y,t;
	scanf("%d %d",&x,&y);
	if(x==1||y==1)
	{
		printf("1\n");
	}
	else
	{if(x==y)
	{printf("%d\n",x);}
	else
	{do
	{if(x>y)
	{
		t=x;
		x=y;
		y=t;
	}
	y=y/2;
	}while(x!=y);
	printf("%d\n",y);
	}
	}


	return 0;
}

