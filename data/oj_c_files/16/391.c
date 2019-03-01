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
	int x,i,j,a[5];
	scanf("%d",&x);
	i=0;
	while (x>=10)
	{
		a[i]=x%10;
		x=x/10;
		i=i+1;
	}
	a[i]=x;
	for (j=0;j<=i;j++) printf("%d",a[j]);
	printf("\n");

}