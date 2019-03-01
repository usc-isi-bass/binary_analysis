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
	int m,a[5],k=0,i,t,n,p;
	scanf("%d",&m);
	n=m;
	while(m>=1)
	{
		m=m/10;
		k++;
	}
	
	for(i=0;i<k;i++)
	{
		t=n-n/10*10;
		printf("%d",t);
		n = n/10;
	}
	printf("\n");
	



}
