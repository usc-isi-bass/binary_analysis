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
	if((((13%7)-1+w)==5)||(((13%7)-1+w)==12))
		printf("1\n");
	if((((44%7)-1+w)==5)||(((44%7)-1+w)==12))
		printf("2\n");
	if((((72%7)-1+w)==5)||(((72%7)-1+w)==12))
		printf("3\n");
	if((((103%7)-1+w)==5)||(((103%7)-1+w)==12))
		printf("4\n");
	if((((133%7)-1+w)==5)||(((133%7)-1+w)==12))
		printf("5\n");
	if((((164%7)-1+w)==5)||(((164%7)-1+w)==12))
		printf("6\n");
	if((((194%7)-1+w)==5)||(((194%7)-1+w)==12))
		printf("7\n");
	if((((225%7)-1+w)==5)||(((225%7)-1+w)==12))
		printf("8\n");
	if((((256%7)-1+w)==5)||(((1256%7)-1+w)==12))
		printf("9\n");
	if((((286%7)-1+w)==5)||(((286%7)-1+w)==12))
		printf("10\n");
	if((((317%7)-1+w)==5)||(((317%7)-1+w)==12))
		printf("11\n");
	if((((347%7)-1+w)==5)||(((347%7)-1+w)==12))
		printf("12\n");
	return 0;
}


// 13 44 74 103 133 164 194 225 256 286 317 347