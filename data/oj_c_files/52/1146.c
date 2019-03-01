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

void *malloc(unsigned int size);
void main()
{
	int m,n,*p,*a,i=0;
	a = (int *)malloc(200*sizeof(int));
	scanf("%d%d",&n,&m);
	while(i<n)scanf("%d",a+(i++));
	p=a+n,i=0;
	while(i<n-m)*(p+i++)=*(a+i);
	p=a+n-m;
	for(i=0;i<n;i++)
	{
		if(i>0)printf(" ");
		printf("%d",*(p+i));
	}
}