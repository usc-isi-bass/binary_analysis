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
	char a[200],*p=NULL,b;
	cin.getline(a,199);
	p=a;
	do{
		b=*p;
		p++;
		b=b+*p;
		cout <<b;
	}while(*(p+1)!='\0');
	b=*p;
	p=a;
	b=b+*p;
	cout <<b <<endl;
	return 0;
}
