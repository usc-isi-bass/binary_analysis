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
	int a,b,c[1000],i,j,*p,t,m;
	scanf("%d %d",&a,&b);
	for(i=0;i<a;i++)
    scanf("%d",&c[i]);
	for(j=0;j<b;j++)
	{
		p=c;
	for(i=1,t=c[0];i<a;i++)
	{
		m=*(p+i);
		*(p+i)=t;
		t=m;
	}
     c[0]=t;
	}
	printf("%d",c[0]);
	for(i=1;i<a;i++)
    printf(" %d",c[i]);
	printf("\n");
}