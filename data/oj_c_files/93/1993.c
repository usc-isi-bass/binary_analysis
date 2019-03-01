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
	int k;
	scanf("%d",&k);
if(k%3==0&&k%5==0&&k%7==0)
printf("3 5 7");
else if(k%3==0&&k%5==0)
printf("3 5");
else if(k%3==0&&k%7==0)
printf("3 7");
else if(k%5==0&&k%7==0)
printf("5 7");
else if(k%3==0)
printf("3");
else if(k%5==0)
printf("5");
else if(k%7==0)
printf("7");
else
printf("n");
}
