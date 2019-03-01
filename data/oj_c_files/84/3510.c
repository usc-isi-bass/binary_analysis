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
	int *p,i,n,max,sec;
	p=(int *)(malloc(10000*sizeof(int)));
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	max=*p;
	sec=*p;
	for(i=1;i<n;i++)
	{
		if(*(p+i)>max) max=*(p+i);
		else if(*(p+i)>sec) sec=*(p+i);
	}
	printf("%d\n%d",max,sec);
}