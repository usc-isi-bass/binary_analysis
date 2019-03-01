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
	char *p,*p1,*head,*head1;
	p=(char*)malloc(100*sizeof(char));
	head=p;
	p1=(char*)malloc(100*sizeof(char));
	head1=p1;
	gets(p);
	for(;*(p+1)!='\0';p++)
	{
		*p1=*(p)+*(p+1);
		p1++;
	}
	*p1=*p+*head;
	*(p1+1)='\n';
	for(p1=head1;*p1!='\n';p1++)
		printf("%c",*p1);
}