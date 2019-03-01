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

void main(){
	char a[5];
	int i;
	for(i=0;i<=5;i++)
	{
		scanf("%c",&a[i]);
		if((int)(a[i])==10)
			break;
	}
	for(;i>=1;i--)
	{
		printf("%c",a[i-1]);
	}	
}