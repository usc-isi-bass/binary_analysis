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
	int i,m,n,sum=0;
	char a[100];
	gets(a);
	for(i=0;*(a+i)!='\0';i++)
	{	
		if(*(a+i)==' '&&*(a+i+1)!=' ')printf("%c",*(a+i));
		if(*(a+i)!=' ')printf("%c",*(a+i));
	}
}
