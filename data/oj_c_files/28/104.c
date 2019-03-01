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
{	char c[300][20]={{'\0'}};
	int i;
	scanf("%s",c[0]);
	for(i=1;getchar()!='\n';i++)
		scanf("%s",c[i]);
	printf("%d",strlen(c[0]));
	for(i=1;c[i][0]!='\0';i++)	
	printf(",%d",strlen(c[i]));
}