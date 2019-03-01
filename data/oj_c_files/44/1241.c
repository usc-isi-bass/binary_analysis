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
	int cal(int a);
	int i,j;
	int a[6];
	for(i=1;i<=6;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=6;i++)
		printf("%d\n",cal(a[i]));
}
int cal(int a)
{
	int s=0,p=0;
	if(a<0)
	{
		a=-a;
		p=1;
	}
	while(a)
	{
		s=s*10+a%10;
		a=a/10;
	}
	if(p==1)
		return(-s);
	else
		return(s);
}
	
