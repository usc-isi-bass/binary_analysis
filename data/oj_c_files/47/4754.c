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
	int *p,*hd;int i,n;scanf("%d",&n);
	hd=p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++,p++)
	{scanf("%d",p);}
	for(p=hd+n-1,i=0;i<n;i++,p--)
	{if(i==0) printf("%d",*p);
	else printf(" %d",*p);}

}