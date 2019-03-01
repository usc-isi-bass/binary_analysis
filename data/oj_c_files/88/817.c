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
	char *c;
	int k=1;
	c=(char*)malloc(30*sizeof(char));
	gets(c);
	for(;*c!='\0';c++)
	{
		if((*c<48)||(*c>57))
		   k=0;
        else if(k==0)
        {
        	printf("\n%c",*c);
        	k=1;
        }
        else
           printf("%c",*c);
	}
}