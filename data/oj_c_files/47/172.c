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
	int n,i,a[100];
	int *b[100];
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=1;i<=n;i++)

	{
		b[i]=&a[n+1-i];
		
	}

printf("%d",*b[1]);
	for(i=2;i<=n;i++)
	{

	
		printf(" %d",*b[i]);
	}




	return 0;
}