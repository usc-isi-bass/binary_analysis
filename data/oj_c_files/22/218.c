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
	int a[400],i=0,max,j,max2;;
	while (scanf("%d",&a[i])!=EOF)
	{
		scanf(",");
		i++;
	}
	i--;
	max=0;
	max2=-1;
	for (j=0;j<=i;j++)
		if (max<a[j]) max=a[j];
	for (j=0;j<=i;j++)
		if ((max2<a[j])&&(a[j]<max)) max2=a[j];
	if (max2==-1) printf("No");
	else printf("%d",max2);
}