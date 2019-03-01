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

	int kong(int m,int n);
	int bukong(int m,int n);
int main()
{
	int i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int m,n,s;
		scanf("%d%d",&m,&n);
		s=kong(m,n)+bukong(m,n);
		printf("%d\n",s);
	}
	return 0;
}

int kong(int m,int n)
{
	if(n==1&&m>0)
		return 0;
	else
	return kong(m,n-1)+bukong(m,n-1);
}

int bukong(int m,int n)
{
	if(m==n)return 1;
	if(m>n)
	return kong(m-n,n)+bukong(m-n,n);
	if(m<n)
	return 0;
}








