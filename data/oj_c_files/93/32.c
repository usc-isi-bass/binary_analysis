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
	int x;
	scanf("%d", &x);
	if (x%(3*5*7)==0) printf("%c%c%c%c%c",'3',' ','5', ' ','7');
		else if (x%(3*5)==0)  printf("%c%c%c", '3',' ','5');
		else if (x%(5*7)==0)  printf("%c%c%c", '5',' ','7');
		else if (x%(3*7)==0)  printf("%c%c%c", '3',' ','7');
		else if (x%3==0)  printf("%c", '3');
		else if (x%5==0)  printf("%c", '5');
		else if (x%7==0)  printf("%c", '7');
		else printf("%c", 'n');
}

