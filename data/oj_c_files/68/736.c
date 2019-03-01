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
	int a,i,j,x1=1,n;
	scanf("%d",&n);
	for (a=6;a<=n;a=a+2)
	for(i=2;i<=a;i++)
		if ((i==2)||(i%2==1))
		{
			x1=1;
				for(j=2;j<=sqrt(i-1)+1;j++)
				if (i%j==0) {x1=0;break;}
				if (x1)
					for(j=2;j<sqrt(a-i)+1;j++)
				if ((a-i)%j==0) {x1=0;break;}
				if(x1){printf("%d=%d+%d\n",a,i,a-i);break;}
		}
}
