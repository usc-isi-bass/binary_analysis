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
	char ori[101];
	gets(ori);
	int i;
	for(i=0;i<strlen(ori)-1;i++)
	{
		printf("%c",ori[i]+ori[i+1]);
	}
	printf("%c\n",ori[i]+ori[0]);
	return 0;
}