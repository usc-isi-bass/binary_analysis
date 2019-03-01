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


int main(void)
{
	int n;
	scanf("%d",&n);
	
	for(int i = 3;i < n;i++)
	{
	for(int k = 2;k < i;k++)
	{
		if(i % k == 0) goto There; 
	}
	for(int k = 2;k < n-i;k++)
	{
		if((n-i)%k == 0) goto There;
	}
	if(i <= n-i) printf("%d %d\n",i,n-i);
	There:;
	} 
	return 0;
} 
