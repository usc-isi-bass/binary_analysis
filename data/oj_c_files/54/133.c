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
	int i,n,k,j,temp;
    scanf("%d %d",&n,&k);
    j=0;
	i=1;
	while (i<n)
	{
		j=j+1;
		temp=j*n+k;
        for (i=2;i<=n;)
		{
			if (temp%(n-1)!=0) {i=i-1;break;}
			else {temp=temp/(n-1)*n+k; i=i+1;}
		}
	}
    printf("%d\n",temp);
}
