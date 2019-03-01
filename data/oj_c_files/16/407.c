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
	int a,i;
	scanf("%d",&a);
         if(a==0) printf("%d",a);
	for(i=0;i<5;i++)
	{
		if(a!=0)
			printf("%d",a%10);
		a=a/10;
	}
	printf("\n");
	return(0);
}
