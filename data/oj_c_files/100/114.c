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
	char a[300],t;
	int  i,f=0,s=0;
		gets(a);
	for(t='a';t<='z';t++)
	{       for(i=0;i<strlen(a);i++)
			if(t==a[i])
			{ s=s+1; f=1;}
			if(s!=0)
			printf("%c=%d\n",t,s);
			s=0;
	}
    if(f==0)  printf("No"); 
}