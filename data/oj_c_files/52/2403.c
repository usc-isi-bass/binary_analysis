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
	int i,n,m;
	scanf("%d %d",&n,&m);
	int *p[100];
	for(i=0;i<n-m;i++)
	{p[i+m]=(int *)calloc(1,sizeof(int));
	scanf("%d",p[i+m]);}
	for(i=0;i<m;i++)
	{
		p[i]=(int *)calloc(1,sizeof(int));
		scanf("%d",p[i]);
	}
	for(i=0;i<n;i++)
	if(i!=0) printf(" %d",*p[i]);else printf("%d",*p[i]);

}