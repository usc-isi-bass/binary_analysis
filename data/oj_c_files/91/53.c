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
	int i,length;
	char sz1[101],sz2[101],*character,*family;
	character=sz1;
	gets(character);
	family=sz2;
	for(i=0;*(character+i+1)!='\0';i++)
	{
		*family=*(character+i)+*(character+i+1);
		family++;
	}
	*family++=*character+*(character+i);
	*family='\0';
	family=sz2;
	if(*family!='\0')
		printf("%s",family);
	return 0;
}
