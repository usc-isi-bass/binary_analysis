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
	char a[20],b;
	scanf("%s",a);
	printf("%d",strlen(a));
	b=getchar();
	if (b==' ')
	{
	for (;;)
	{
		scanf("%s",a);
		printf(",%d",strlen(a));
		b=getchar();
		if (b!=' ') break;
	}
	}
 }
