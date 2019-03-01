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
	char (*str)[100];
	char substr[100][100];
	int m=0,i;
	for(i=0;;i++)
	{
		scanf("%s",substr[i]);
		m=m+1;
		if(getchar()=='\n') break;
	}
	str=substr;
	for(i=m-1;i>0;i--)
		printf("%s ",str[i]);
	printf("%s",str[0]);
}