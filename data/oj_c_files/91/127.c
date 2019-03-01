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
	char a[101],b[101],len,i;
	char *p1,*p2;
	p1=a;
	p2=b;
	for(i=0;i<101;i++)
	{
		*(p1+i)='\0';
		*(p2+i)='\0';
	}

	gets(p1);
	len=strlen(a);

	for(i=0;i<len;i++)
	{
		if(i!=len-1)
			*(p2+i)=*(p1+i)+*(p1+i+1);
		else
			*(p2+i)=*(p1+i)+*(p1);
	}

	puts(p2);
	return 0;
}
	