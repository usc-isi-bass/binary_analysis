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
	void odd(int);/*??*/
	void even(int);/*??*/
	int n;
	scanf("%d",&n);
	if(n%2==0)
		even(n);
	else if(n!=1)
		odd(n);
	else
		printf("End");
	return 0;
}
void odd(int n)
{
	void even(int);
	int m;
	m=n*3+1;
	printf("%d*3+1=%d\n",n,m);
	if(m%2==0)
		even(m);
	else if(m!=1)
		odd(m);
	else printf("End");
}
void even(int n)
{
	int m;
	m=n/2;
	printf("%d/2=%d\n",n,m);
	if(m%2==0)
		even(m);
	else if(m!=1)
		odd(m);
	else
		printf("End");
}