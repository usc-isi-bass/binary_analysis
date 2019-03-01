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

main()
{
	char *a;
	a=(char *)malloc(100*sizeof(char));
	gets(a);
	int i,m;
	m=strlen(a);
	for(i=0;i<m-1;i++)
		printf("%c",*(a+i)+*(a+i+1));
	printf("%c",*a+*(a+m-1));
}