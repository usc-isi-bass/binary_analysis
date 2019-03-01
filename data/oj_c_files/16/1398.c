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


int main()
{
	int i,j,n,a[5];
	scanf("%d",&n);
	i=1;
	if (n==0) printf("0");
	while (n>0)
	{
		a[i]=n%10;
		n=n/10;
		i=i+1;
	}
	for(j=1;j<i;j++) printf("%d",a[j]);
	return 0;
}