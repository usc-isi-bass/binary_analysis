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

int f(int,int);
void main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
		int m,n,a;
		scanf("%d %d",&m,&n);
		a=f(m,n);
		printf("%d\n",a);
	}
}
int f(int a,int b)
{
	if(a<0) return(0);
	else if(b<0) return(0);
	else if(a==1||b==1) return(1);
	else
	{
		int s;
		s=f(a,b-1)+f(a-b,b);
		return(s);
	}
}


