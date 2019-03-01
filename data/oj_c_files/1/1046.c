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

int f(int c,int t);
void main()
{
	int n,c;
	scanf("%d",&n);
	for(;n>0;n--)
	{
		scanf("%d",&c);
		if(c==1 || c==2)
			printf("1\n");
		else
			printf("%d\n",f(c,2));
	}
	}
int f(int c,int t)
{
	int count=1,i;
	for(i=t;i<c;i++)
	{
		if(c%i==0)
			count+=f(c/i,i);
	}
	if(i==c)	return count;
	else		return 0;
}