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
	int m,j,w,e;
	scanf("%d",&m);
	int judge(int a);
	for(j=2;j<=m/2;j++)
	{
		w=judge(j);
		e=judge(m-j);
		if(w==1&&e==1)
			printf("%d %d\n",j,m-j);
	}

	return 0;
}
int judge(int a)
{
	int i,flag=1;
	for(i=2;i*i<=a;i++)
	{
		if(a%i==0)
			{flag=0;
		break;}
	}
	return flag;
}