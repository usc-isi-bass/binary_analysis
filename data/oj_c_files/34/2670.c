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

void oushu(int a)
{
	void qishu(int a);
	printf("%d/2=%d\n",a,a/2);
	if(a/2==1)
	{
		printf("End");
		printf("\n");
	}
	else
	{
	if((a/2)%2==0)
		oushu(a/2);
	else if((a/2)%2!=0)
		qishu(a/2);
	}
}
void qishu(int a)
{
	void oushu(int a);
	printf("%d*3+1=%d\n",a,a*3+1);
	if((a*3+1)==1)
	{
		printf("End");
		printf("\n");
	}
	else
	{
		if((a*3+1)%2==0)
			oushu((a*3+1));
		else qishu((a*3+1));
	}
}
void main()
{
	void oushu(int a);
	void qishu(int a);
	int n;
	scanf("%d",&n);
	if(n==1)
	{
		printf("End");
		printf("\n");
	}
	else
	{

	if(n%2==0)
		oushu(n);
	else qishu(n);
	}
}