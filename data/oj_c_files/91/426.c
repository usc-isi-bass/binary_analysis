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

char a[1000],b[1000];
int main()
{
	int i=0;
	while(scanf("%c",&a[i++])!=EOF);
	for(i=0;i<strlen(a)-1;i++)
	{
		if(i!=strlen(a)-2)
			b[i]=a[i]+a[i+1];
		else if(i==strlen(a)-2)
			b[i]=a[i]+a[0];
	}
	printf("%s",b);
	return 0;
}
