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
	int a[300],b[300],n; 
	int i,j,m=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	{
		for(j=i-1;j>=0&&(a[i]!=a[j]);j--);
		
		if(j<0) 
			b[m++]=a[i];
	}
	for(i=0;i<m;i++)
	{
		printf("%d",b[i]);
	    if (i!=m-1)
			printf(",");
	}

}
