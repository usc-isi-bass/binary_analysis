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
	int i,n,j,m,k,a;
	scanf("%d",&a);
	for(i=6;i<=a;i+=2)
	{
		for(n=3;n<i;n+=2)
		{
			for(j=3,k=1;j<=(int)sqrt(n);j+=2)
			{
				if(n%j==0) k=0;
			}
			for(j=3,m=1;j<=(int)sqrt(i-n);j+=2)
			{
				if((i-n)%j==0) m=0;
			}
			if(m==1&&k==1)
			{
				printf("%d=%d+%d\n",i,n,i-n);
		         break;
			}
		}
	}
}