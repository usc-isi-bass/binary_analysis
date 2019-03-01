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
	int f,m,n,i,t=0,a[100];
	do
	{
		f=1;
		scanf("%d %d",&n,&m);
		for(i=2;i<=n;i++)
			f=(f+m-1)%i+1;
		a[t]=f;
		t++;
	}
	while(m!=0||n!=0);
	for(i=0;i<t-1;i++)
		printf("%d\n",a[i]);
}