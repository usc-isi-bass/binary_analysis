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
	char a[150]={'\0'};
	gets(a);
	char *p=a;
	char q=a[0];
	int i=0;
	for(i=0;i<strlen(a)-1;i++)
	{
		*p=*p+*(p+1);
		p++;
	}
	*p+=q;
	cout<<a;
	return 0;
}