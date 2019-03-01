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
	int i=0;
	char str[100][100];
	while (scanf("%s",str[i])!=EOF)//EOF?????
		i++;
	i--;//??????????,?????
		for(;i>0;i--)
		printf("%s ",str[i]);
	printf("%s",str[0]);
}
