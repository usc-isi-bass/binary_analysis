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
	int a[5],b,c;
	a[0]=100;a[1]=50;a[2]=20;a[3]=10;a[4]=5;
	scanf ("%d",&b);
	for (int i=0;i<=4;i++)
	{
		c=b/a[i];
		b=b-c*a[i];
		printf ("%d\n\n",c);
		}
		printf ("%d",b);
}