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



int main(int argc, char* argv[])
{
	char *p,*q,*p1,*q1,t;
	int i,k;
	p=(char*)malloc(120*sizeof(char));
	gets(p);
	k=strlen(p);
	p1=p;
	t=*p;
	
	for(i=0;i<k-1;i++)
	{
		*p1=*p1+*(p1+1);
		p1++;
	}
	*p1=t+*p1;

	printf("%s",p);

}
