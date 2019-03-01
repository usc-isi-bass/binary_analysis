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
	char a[110],b[110];
	char *p=a,*q=b;
	cin.getline(a,110);
	memset(b,'\0',sizeof(b));
	p=a;
	p++;
	while(*p!='\0'){
		*q=*p+*(p-1);
		p++;
		q++;
	}
	*q=*a+*(p-1);
	q=b;
	while(*q!='\0'){
		cout<<*q;
		q++;
	}
	return 0;
}
