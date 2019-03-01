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
	char line[6];
	int i,j,k;
	scanf("%s",line);
	for(i=0,k=0;line[i]!='\0';i++)
		k=k+1;
	for(j=k-1;j>=0;j--)
		printf("%c",line[j]);
}
