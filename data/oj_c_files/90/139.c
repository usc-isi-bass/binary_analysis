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
	int f(int,int);
	int m,n,t;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d %d",&m,&n);
		printf("%d\n",f(m,n));
		t--;
	}
}
int f(int x,int y)
{
	if(x==0||y==1)
		return 1;
	if(x<y)
		return f(x,x);
	return f(x-y,y)+f(x,y-1);
}