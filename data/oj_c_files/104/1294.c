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
	int a,b;
	int temp;
	scanf("%d %d",&a,&b);
	do
	{
		if(a>b)
		  a=a/2;
		if(a<b)
		  b=b/2;
	}while(a!=b);
	printf("%d",a);
	return 0;
}