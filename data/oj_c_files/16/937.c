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
	scanf("%d",&n);
	if (n>=0,n<10)
		printf("%d\n",n);
	else 
		if (n>=10,n<100)
		printf("%d%d\n",n%10,n/10);
	    else 
			if (n>=100,n<1000)
				printf("%d%d%d\n",n%10,n%100/10,n/100);
	        else 
		        if (n>=1000,n<10000)
		        printf("%d%d%d%d\n",n%10,n%100/10,n/100%10,n/1000);
	        else printf("00001\n");
	return 0;
}
		
		