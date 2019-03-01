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
	char A[105]={'\0'};
	int len;
	int i;
	char *pt,*pt1,temp;
	pt=A;
	gets(pt);
	len=strlen(A);
	pt1=&temp;
	*pt1=*pt;
	for(i=0;i<len-1;i++)
	{
		*pt= *pt + *(pt+1);
		pt++;
	}
	*pt= *pt + *pt1 ;
	pt=A;
	puts(pt);
	return 0;
}