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
	int dayofthirteenth[12]={13,44,72,103,133,164,194,225,256,286,317,347};
	int w,month,k;
	scanf("%d",&w);
	for(month=0;month<=12;month++)
	{
	   for(k=0;k<60;k++)
	   {
	   	if(dayofthirteenth[month-1]==(-1-w+k*7))printf("%d\n",month);
	   }
	}
	
}	