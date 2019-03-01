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
	char a[101];
	gets(a);
	char *p=a;
	char *q;
	q=p;
	char b[101]={0};
	char *qp=b;
	char *m;
	m=qp;
	for(p=q+1;*p!='\0';p++){
		*qp=*(p-1)+*p;
		qp++;
	}
	*qp=(*q)+(*(p-1));
	qp=m;
	printf("%s\n",qp);
	return 0;
}