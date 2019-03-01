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
	int i, j, n, sum=0;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		if(i % SHENMI == 0) {continue;}
		if((SHENMI*10 < i) && ((SHENMI+1)*10 > i)) {continue;}
		j = i/10;
		if(((i-j*10) % SHENMI ==0) && ((i-j*10) != 0)) continue;
		sum += i*i;
	}
	printf("%d\n",sum);
	return 0;
}