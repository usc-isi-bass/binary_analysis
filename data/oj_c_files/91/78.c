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
	char p,a[100005],b[100005];
	int count=0,i;
	scanf("%c",&p);
	while(p!='\n')
	{
		a[count]=p;
		scanf("%c",&p);
		count++;
	}
	for(i=1;i<=count-1;i++)
	{
		b[i-1]=a[i-1]+a[i];
	}
	b[count-1]=a[count-1]+a[0];
	printf("%s",b);
}