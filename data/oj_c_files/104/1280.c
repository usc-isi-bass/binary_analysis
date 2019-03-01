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

int finder(int a,int b)
{
	int c;
	for(;a;a=a/2)
		for(c=b;c>=a;c=c/2)
			if(a==c)
			{
				printf("%d",c);
				return 0;
			}
}

int main()   
{   
	int a,b,c,d;
	scanf("%d%d",&a,&b);
	finder(a,b);  
	return 0;
}   