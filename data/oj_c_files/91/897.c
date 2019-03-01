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
int j=0;
	char a[101],b[101], *p, *q, *i;
	cin.getline (a,101);
	p=a;
	i=a;
	q=b;	for (;*p!='\0';p++,q++)
	{j++;
		if (*(p+1)=='\0')
			*q=*p+*i;
		else
			*q=*p+*(p+1);
	}
	for (int k=0;k<=j-1;k++)
	{
		cout << b[k];
	}
	return 0;
}