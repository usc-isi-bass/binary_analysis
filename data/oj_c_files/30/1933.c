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
	int a,b,sum=0;
	scanf("%d",&b);
	for(a=1;a<=b;a++){
		if(a%7==0)continue;
		if(a%10==7)continue;
		if(a-a%10==70)continue;
		sum+=a*a;
	}
	printf("%d\n",sum);
	return 0;
}
