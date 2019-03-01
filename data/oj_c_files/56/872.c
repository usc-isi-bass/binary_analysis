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
	int a[5],b,k=0,i;
    scanf("%d",&b);
	for(i=0;;i++)
	{
		a[i]=b%10;
		b=b/10;
		k=k+1;
		if(b<1)
			break;
	}
	for(i=0;i<k;i++)
		printf("%d",a[i]);
}