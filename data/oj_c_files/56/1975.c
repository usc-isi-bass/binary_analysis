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
	int x,y;
	int a[5],i;
	int w=0;
	scanf("%d",&x);
	for(i=4;i>=0;i--)
	{
		a[i]=x%10;
		x=x/10;
	}
	for(i=0;a[i]==0;i++)
		w++;
	for(i=4;i>=w;i--)
		printf("%d",a[i]);
	printf("\n");
}
