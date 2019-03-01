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

main()
{
	int k,a[26],i;
	int check(int a[26],int k);
	scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf("%d",&a[i]);
	printf("%d",check(a,k));
}
int check(int a[26],int k)
{
	int i,j,m,b[26];
	for(i=0;i<k;i++)
	{
		for(j=0,m=0;j<i;j++)
			if(a[j]>=a[i])
				if(b[j]>m)
					m=b[j];
		if(m==0)
			b[i]=1;
		else
			b[i]=m+1;
	}
	for(i=0,m=0;i<k;i++)
		if(b[i]>m)
			m=b[i];
	return m;
}

