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
    int w;
	scanf("%d",&w);
	if((12%7+w)%7==5)
		printf("1\n");
    if((43%7+w)%7==5)
		printf("2\n");
    if(((43+28)%7+w)%7==5)
		printf("3\n");
    if(((43+28+31)%7+w)%7==5)
		printf("4\n");

    if(((43+28+31+30)%7+w)%7==5)
		printf("5\n");
    if(((43+28+31+30+31)%7+w)%7==5)
		printf("6\n");
    if(((43+28+31+30+31+30)%7+w)%7==5)
		printf("7\n");
    if(((43+28+31+30+31+30+31)%7+w)%7==5)
		printf("8\n");

	if(((43+28+31+30+31+30+62)%7+w)%7==5)
		printf("9\n");
	if(((43+28+31+30+31+30+62+30)%7+w)%7==5)
		printf("10\n");
	if(((43+28+31+30+31+30+62+61)%7+w)%7==5)
		printf("11\n");
	if(((43+28+31+30+31+30+62+61+30)%7+w)%7==5)
		printf("12\n");
	return 0;
}