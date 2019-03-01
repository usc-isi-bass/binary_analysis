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
	int max,min,x,i,n,s=0;
	scanf("%d",&n);
	scanf("%d",&max);
	min=max;
	s=max;
	for(i=1;i<n;i++)
	{scanf("%d",&x);
	if(x>max)max=x;
	else
		if(x<min)min=x;
	s=s+x;}
	if(abs(min*n-s)==abs(max*n-s))printf("%d,%d",min,max);
	else
		if(abs(min*n-s)<abs(max*n-s))printf("%d",max);
		else printf("%d",min);
}