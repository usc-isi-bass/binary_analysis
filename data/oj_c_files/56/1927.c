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
	
	char a,b,c,d,e;
int i=0;
scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
if(i!='\n')
printf("%c%c%c%c%c\n",e,d,c,b,a);
return 0;
}