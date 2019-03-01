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
	int min,max,x,n,i,s;
	scanf("%d",&n);
	scanf("%d",&x);
	s=max=min=x;
	for(i=1;i<n;i++)
	{
		scanf("%d",&x);
		if(min>x) min=x;
		if(max<x) max=x;
		s=s+x;
	}
	if((n*max-s)>(s-n*min)) printf("%d",max);
	if((n*max-s)<(s-n*min)) printf("%d",min);
	if((n*max-s)==(s-n*min)) printf("%d,%d",min,max);
}