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
	char a;
	int i=0;
	for(;a!='\n';)
	{
	a=getchar();	
	if(a!=' ')
	{printf("%c",a);i=0;}
	else if((a==' ')&&(i==0))
	{i++;printf("%c",a);continue;}
	else continue;
	}
}