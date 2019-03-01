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
	unsigned a[300];
	int i=0,m,l,t;
	char c;
	do
	{
		scanf("%d",&a[i]);
		i++;
		c=getchar();
	}while(c!='\n');
	l=i;
	if(l==1)
		printf("No");
	else 
	{
	m=0;
	for(i=1;i<l;i++)
		if(a[i]>a[m])
			m=i;
		t=m;
		m=0;
		while(a[m]==a[t])m++;
		for(i=0;i<l;i++)
		if(a[i]<a[t]&&a[i]>a[m])
			m=i;
		if(a[m]==a[t]||m==l)
			printf("No");
		else
			printf("%u\n",a[m]);
	}
}