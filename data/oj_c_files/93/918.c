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
	int a;
   char n;
	scanf("%d",&a);
	if(a%3==0&&a%5==0&&a%7==0)printf("%s","3 5 7");
	else if(a%3==0&&a%5==0)printf("%s","3 5");
    else if(a%3==0&&a%7==0)printf("%s","3 7");
	else if(a%7==0&&a%5==0)printf("%s","5 7");
	else if(a%3==0)printf("%c",'3');
	else if(a%5==0)printf("%c",'5');
	else if(a%7==0)printf("%c",'7');
	else printf("%c",'n');
	return 0;
}
