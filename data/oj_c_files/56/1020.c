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
	int m,i;
	char a[6];
	scanf("%s",a);
    m=strlen(a);
	for(i=m;i>=0;i--)
	{
		if(a[i]=='\0') continue;
		else printf("%c",a[i]);
	}
	return 0;
}
