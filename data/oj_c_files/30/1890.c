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

int main(int argc, char* argv[])
{
	int m;
	int sum=0;
	int i;
	scanf("%d",&m);

	for(i=1;i<=m;i++)
	{
		if(i%10==7||i/10==7||i%7==0)
			sum+=i*i;
	}
	
	int SUM=0;
	int n;
	for(n=0;n<=m;n++)
	{
		SUM+=n*n;
	}
	printf("%d",SUM-sum);
	return 0;
	
}
