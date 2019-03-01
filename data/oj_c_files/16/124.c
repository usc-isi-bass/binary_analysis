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

// pro.cpp : Defines the entry point for the console application.
//


int main(int argc, char* argv[])
{
	int n,b,c=11,i=1,j=1;
	scanf("%d",&n);
	
	if (n==0)
		printf("%d",n);
	else
		
		
		while(n>0)
		{
			
			b=n%10;
			printf("%d",b);	
			n=n/10;
			
			
		} 
		
		return 0;
}
