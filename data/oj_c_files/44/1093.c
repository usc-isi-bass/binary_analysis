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

int re(int *a)
{
	int i,h,g,f=1,n=0;
	if(*a<0){f=-1;*a*=-1;}else if(*a==0)return 0;
	for(h=1;*a+0.1>pow(10,h);h++);
	g=h;
	for(i=0;i<h;i++)
	{	if(g==1)n+=*a;
		else n+=(*a%10)*pow(10,--g);
		*a=(*a-*a%10)/10;
	}
	return (f*n);
}
void main()
{
	int i,a[6];
	for(i=0;i<6;i++)
	{ 
		scanf("%d",&a[i]);
		printf("%d\n",re(a+i));
	}
}
