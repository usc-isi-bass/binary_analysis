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
	int a[5][5],m,n,i,*p[5],*t;
	for(i=0;i<5;i++)
	p[i]=a[i];
	for(i=0;i<5;i++)
		scanf("%d %d %d %d %d",p[i],p[i]+1,p[i]+2,p[i]+3,p[i]+4);
	scanf("%d %d",&n,&m);
	if(n<5&&m<5)
	{
		t=p[n];
		p[n]=p[m];
		p[m]=t;
	    for(i=0;i<5;i++)
		{
			printf("%d %d %d %d %d",*p[i],*(p[i]+1),*(p[i]+2),*(p[i]+3),*(p[i]+4));
			if(i<4)printf("\n");
		}
	}
	else printf("error");
	return 0;
}