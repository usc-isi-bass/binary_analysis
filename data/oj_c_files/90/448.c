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


int apple(int m,int n)
{
	if(m<n)
		n=m;
	if ((m==1)||(m==0)||(n==1))
		return 1;
	else
		return apple(m,n-1)+apple(m-n,n);
}

void main()
{
	int i,t,m[20]={0},n[20]={0},answer[20]={0};
	
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&m[i],&n[i]);
		answer[i]=apple(m[i],n[i]);
	}

	for(i=0;i<t;i++)
	{
		printf("%d\n",answer[i]);
	}

}