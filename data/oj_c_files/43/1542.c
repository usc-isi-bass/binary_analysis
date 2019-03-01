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
	int x,i,j,k,l;
	scanf("%d",&x);
	for (i=3;i<=x/2;i+=2)
	{
		l=0;
		j=x-i;
		for(k=2;k<=i-1;k++)
		{
			l=l+!(i%k);
		}
		for (k=2;k<j;k++)
		{
			l+=!(j%k);
		}
		if (!l) printf("%d %d\n",i,j);
	}




}