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
	int max(int m,int b[]);
	int i=1,n,t,a[300];

	scanf("%d",&a[0]);
	while(scanf(",%d",&a[i]))
		i++;
	n=i;

	t=max(n,a);
	for(i=0;i<n;i++)
		if(a[i]==t)
			a[i]=-1;

		t=max(n,a);
	if(t==-1)
		printf("No\n");
	else
		printf("%d\n",t);
}

int max(int m,int b[])
{
	int i,t;
	t=b[0];
	for(i=1;i<m;i++)
		if(t<b[i])
			t=b[i];

	return(t);
}

