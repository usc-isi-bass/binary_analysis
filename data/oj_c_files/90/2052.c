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
	int f(int x,int y);
	int t,m,n,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&m,&n);  //m???????n????
		k=f(m,n);
		printf("%d\n",k);
	}
	return 0;
}

int f(int x,int y)  //x?????y????
{
	int k;
	if(x<=0 || y==0)
		k=0;
	else
	if(x==1 || y==1)
		k=1;
	else
		if(x==y) k=f(x,y-1)+f(x-y,y)+1;
	else
	{
		k=f(x,y-1)+f(x-y,y);
	}
	return k;
}

