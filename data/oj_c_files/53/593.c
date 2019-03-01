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
	int a[333],*p,n,i,j,k=0;
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
		scanf("%d",p++);
	p=a;
	printf("%d",*p);
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
			if(*(p+i)==*(p+j)) k++;
		if(k==0) printf(",%d",*(p+i));
		k=0;
	}
}