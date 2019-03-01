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
	int a,f[3]={0,0,0};
	scanf("%d",&a);

	if(a%3==0)
	{
		printf("3");
		f[0]=1;
		f[1]=1;
	}
	if(a%5==0)
	{
		if(f[1]==1)
			printf(" ");
		printf("5");
		f[0]=1;
		f[2]=1;
	}
	if(a%7==0)
	{
		if(f[1]==1||f[2]==1)
			printf(" ");
		printf("7");
		f[0]=1;
	}
	if(f[0]==0)
		printf("n");

	return 0;
}