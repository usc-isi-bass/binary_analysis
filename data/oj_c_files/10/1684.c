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
	int a[25],b[25],k,i,j,max=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf ("%d",a+i);
		b[i]=1;
		for(j=0;j<i;j++)
			if(a[j]>=a[i]&&b[j]+1>b[i]) b[i]=b[j]+1;
		if(b[i]>max) max=b[i];
	}
	printf ("%d",max);
}