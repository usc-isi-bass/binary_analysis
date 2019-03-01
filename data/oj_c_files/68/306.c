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
	int n,i,m,k,j,a,b,c;
	scanf("%d",&n);
    for(i=1,c=6;i<=(n/2-2);i++,c++,c++)
	{
		for(m=3;;m++,m++)
		{
			for(a=1;a<=sqrt(m);a++,a++)
			{
				if(m%a==0)
					k=a;
			}
			for(b=1;b<=sqrt(c-m);b++,b++)
			{
				if((c-m)%b==0)
					j=b;
			}
			if(k==1&&j==1)
				break;
		}
    printf("%d=%d+%d\n",c,m,c-m);
	}
	return 0;
}