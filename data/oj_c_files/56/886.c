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
	char a[5],b[5];
	int i,num;
	for (num=0,i=0;(a[i]=getchar())!='\n';i++)
		num++;
    for (i=0;i<num;i++)
		b[i]=a[num-i-1];
	for (i=0;i<num;i++)
		printf("%c",b[i]);
}