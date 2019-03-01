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
	int a[100],i=0,l,j;
	scanf("%d",&a[0]);l=a[0];
	while(getchar()!=10)scanf("%d",&a[++i]);
	for(j=0;j<=i;j++)if(a[j]>l)l=a[j];
	for(j=0;j<=i;j++)if(l==a[j])a[j]=0;
	l=a[0];
	for(j=0;j<=i;j++)if(a[j]>l)l=a[j];
	if(l==0)printf("No");
	else printf("%d",l);
}