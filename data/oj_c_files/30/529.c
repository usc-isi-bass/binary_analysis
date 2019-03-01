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
    int n;
	int sum=0;
	scanf("%d",&n);
	while(n>0)
	{
	if(n<100)
		if(n%7!=0)
			if(n/10!=7)
				if(n%10!=7)
		sum=sum+n*n;
		n--;
	}
	printf("%d",sum);
	return 0;
}