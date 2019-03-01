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
	int n;
	int t,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ 
		if(i%7==0) continue;
		else if((i-7)%10==0) continue;
		else if (i-70<=9&&i-70>=0) continue;
    	else t=i;
        sum+=t*t;
	}
	printf("%d\n",sum);
	return 0;
}