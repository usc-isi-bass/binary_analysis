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
	int n,i,j,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{for(j=i;j>0;j=(j-(j%10))/10)
	   if(j%10==7) break;
	   if(i%7!=0&&j<=0)sum+=i*i;}
		
		printf("%d",sum);

	return 0;
}
