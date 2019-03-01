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
	int s[1000]={0};
	int n,m,i;
	scanf("%d %d",&n,&m);

	for(i=0;i<n;i++)
		scanf("%d",&s[i]);

	for(i=0;i<n-m;i++)
		s[i+n]=s[i];

	for(i=n-m;i<2*n-m-1;i++)
		printf("%d ",s[i]);
	printf("%d",s[2*n-m-1]);
} 