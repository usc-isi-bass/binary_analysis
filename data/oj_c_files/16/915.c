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
	int n,i=0,j,a[6]={0};
	scanf("%d",&n);
	if(n==0) printf("0");
	while(n!=0)
	{
		a[i++]=n%10;
		n/=10;
	}
	for(j=0;j<i;j++)
	printf("%d",a[j]);
	return 0;
}

