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

void main()
{
	int m,i,j,t,s,n;
	scanf("%d",&m);
		for(i=3;i<=m/2;i++)
		{
			t=1;s=1,n=m-i;
			for(j=2;j<=i/2;j++)
				if(i%j==0)
				{
					t=0;
					break;
				}
			for(j=2;j<=n/2;j++)
				if(n%j==0)
				{
					s=0;
					break;
				}
			if(t&&s)printf("%d %d\n",i,n);
		}
}







