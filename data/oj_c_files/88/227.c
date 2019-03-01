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

int pd(char *m)
{
	if(*m>='0'&&*m<='9') return(1);
	else return (0);
}
void main()
{
	char *p,*a;
	p=(char*)malloc(1000*sizeof(char));
	gets(p);
	for(a=p;*a!='\0';a++)
	{
       if(pd(a)) printf("%c",*a);
	   else if(pd(a-1)&&(pd(a)!=1))
		   printf("\n");
	   }
}
    