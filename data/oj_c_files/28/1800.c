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

int main(int argc, char* argv[])
{
	int i,n,a;
	char str[100];
	scanf("%s",str);
	printf("%d",strlen(str));

	while(scanf("%s",str)!=EOF)
	{
		a=strlen(str);
		printf(",%d",a);
	         char str[100];
	}	
	return 0;
}
