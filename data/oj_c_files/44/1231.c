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
{int n,a(int num),s,i=0;
while(i<6)
{
	scanf("%d",&n);
	s=a(n);
	printf("%d\n",s);
	i++;
}
	return 0;
}

int a(int num)
{
	int x=0;
	while(num!=0)
	{
		x=x*10+num%10;
		num/=10;
	}
 return x;
}