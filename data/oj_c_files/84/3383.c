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
	int a[100],n,x,y,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	x=a[0];
	y=a[0];
	for(i=1;i<n;i++)
		if(x<a[i])x=a[i];
	for(i=1;i<n;i++)
		if(y<a[i]&&a[i]!=x)y=a[i];
		printf("%d\n",x);
		printf("%d\n",y);





}
