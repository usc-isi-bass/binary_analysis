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
	char a[101],*p1,*p2,*p;
	gets(a);
	for(p1=a;*p1!='\0';p1++);
	p2=p1;
	do{
		p1--;
		while(*p1!=' '&&p1>a) p1--;
		if(p1!=a)
		{
			for(p=p1+1;p<p2;p++) printf("%c",*p);
		    printf(" ");
		}
		else
			for(p=p1;p<p2;p++) printf("%c",*p);
		p2=p1;
	}while(p1>a);
	return 0;
}
