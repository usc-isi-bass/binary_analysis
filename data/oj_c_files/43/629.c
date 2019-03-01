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

int zhishu(int x)
{
	int i,z=1;
	for(i=2;i<=x/2;i++)
		if(x%i==0)
		{
			z=0;
			break;
		}
	return(z);
}
void main()
{
         int m,i;
         scanf("%d",&m);
         for(i=2;i<=m/2;i++)
         if(zhishu(i)&&zhishu(m-i))
         printf("%d %d\n",i,m-i);
}
