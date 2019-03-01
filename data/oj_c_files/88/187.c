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
    char *c,*p,*p1;
    c=(char*)malloc(1000*sizeof(char));
    int a=0;
    p=c;
    gets(c);
    for(c=p;*c!='\0';c++)
    {
        if(*c>='0'&&*c<='9')
        {
            printf("%c",*c);
            a=1;
        }
        else if(a==1)
			for(p1=c;*p1!='\0';p1++)
				if(*p1>='0'&&*p1<='9')
				{ 
					printf("\n");
					a=0;
					break;
				}
    }
}