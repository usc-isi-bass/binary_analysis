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
	int n,i,x,y,z,m,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		y=i%7;
		x=i%10;
		z=i-x;
		m=z/10;
		if(x==7||y==0||m==7)
			continue;
		sum=sum+i*i;
	}
	printf("%d",sum);
	return 0;
}
