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
	int n,i,s,h;
	int w[100];
	int max(int,int);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&w[i]);
	}
	s=w[0];
	for(i=1;i<n;i++)
	{
		s=max(s,w[i]);
	}
	for(i=0;i<n;i++)
	{
		if(w[i]==s) w[i]=-100000;
	}
	h=w[0];
	for(i=1;i<n;i++)
	{
		h=max(h,w[i]);
	}
	printf("%d\n%d",s,h);
}
int max(int x,int y)
{
	int z;
	z=x>y?x:y;
	return(z);
}