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

int isjishu(int x);
int isoushu(int y);
int main()
{
	int n;

	scanf("%d",&n);
	for(;;)
	{
		if(n==1) break;
		if(n%2==0) n=isoushu(n);
		else n=isjishu(n);
		
	}
	printf("End");
	return 0;
}


int isjishu(int x)
{
	int temp1=x;
	x=x*3+1;
	printf("%d*3+1=%d\n",temp1,x);
	return x;
}
int isoushu(int y)
{
	int temp2=y;
	y=y/2;
	printf("%d/2=%d\n",temp2,y);
	return y;
}
