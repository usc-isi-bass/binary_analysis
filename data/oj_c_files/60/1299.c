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
	int n,a,b,k,p;
	scanf("%d",&n);
	if(n<=4)
	printf("empty");
	for(k=3;k<=n-2;k=k+2)
	{
		for(a=2;a<=sqrt(k);a++)
		if(k%a==0)
		break;
	    if(a>sqrt(k))
	    p=k+2;
	    for(b=2;b<=sqrt(p);b++)
		if(p%b==0)
		break;
		if(b>sqrt(p))
	    printf("%d %d\n",k,p);
	}
}