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
	int i;
	char *p,*pnew,*p1;
	p=p1=(char *)malloc(100*sizeof(char));
	pnew=(char *)malloc(100*sizeof(char));
	gets(p);
	for(p=p1,i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i+1)!='\0')
		*(pnew+i)=(int)*(p+i)+(int)*(p+i+1);
		else
			*(pnew+i)=(int)*(p+i)+(int)*(p);
	}
	*(pnew+i)='\0';
	printf("%s",pnew);
}
