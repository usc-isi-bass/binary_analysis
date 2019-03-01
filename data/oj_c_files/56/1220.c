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

void echo()
{
	char c1;
	scanf("%c",&c1);
	if(c1!='\n')
	echo();
	printf("%c",c1);
}
   int main()
   {echo();}