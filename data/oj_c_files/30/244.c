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
	int n,i,j,k,sum=0,p,pp;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		pp=i/10;
		p=i-10*pp;
		if(i%7!=0&&pp!=7&&p!=7)
			sum=i*i+sum;
	}
	printf("%d",sum);
}
		