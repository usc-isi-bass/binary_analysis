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
	char *p;
	char *q;
	q=(char *)malloc(100*sizeof(char));
	int i,s=0;
	p=(char *)malloc(100*sizeof(char));
    gets(p);
	for(i=0;i<101;i++)
	{
		s++;
	if(*(p+i+1)=='\0')
	break;
		}

	for(i=0;i<(s-1);i++)
	{
		*(q+i)=*(p+i)+*(p+i+1);
		printf("%c",*(q+i));
	}
	printf("%c",*(p+i)+*p);

}