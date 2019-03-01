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

void main() 
{ 
	int n,t=0;
	scanf("%d",&n);
	while(n!=0)
	{
		t=t*10+n%10;
		n=(n-n%10)/10;	
	}
	printf("%d",t);
}
