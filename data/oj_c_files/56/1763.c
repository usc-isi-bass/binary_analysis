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
	char input[20]={0},i=0;
	while(scanf("%c",&input[i])!=-1&&input[i]!='\n')
		i++;
	for(i--;i>=0;i--)
		printf("%c",input[i]);
	printf("\n");
}