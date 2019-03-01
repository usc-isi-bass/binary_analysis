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
	char a[200],b[200];
	gets(a);
	char *p,*q;
	p=a;
	q=b;
	*q=*p;
	q=b+1;
	for(p=a+1;*p!='\0';p++)
	{
		if(*(p)==' '&&*(p-1)==' ')
			continue;
		*q=*p;
		q++;
	}
	
	*q='\0';
	cout<<b;
		return 0;
}