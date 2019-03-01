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

int main(int argc, char* argv[])
{
	int x,i,n,m=0,j=0,k=0,s,l1,l2,l3;
	int a[100000],b[100000];
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d%d%d",&x,&(a[i]),&(b[i]));
		s=a[i]+b[i];
		if(s>m)
		{
			
			j=m;
			m=s;
			l2=l1;
			l1=i;}
		else if(s>j)
		{
		k=j;
		j=s;
		l3=l2;
		l2=i;}
		else if(s>k)
		{	k=s;
		l3=i;}
	}
	printf("%d %d\n",l1,m);
	printf("%d %d\n",l2,j);
	printf("%d %d\n",l3,k);
	return 0;
}

