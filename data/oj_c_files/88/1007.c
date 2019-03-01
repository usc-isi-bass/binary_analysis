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
	char *p,*q,*r;
	char str[30];
	gets(str);
	for(p=str;*p!='\0';)
	{
		if(*p>='0'&&*p<='9'&&*(p-1)!='-')
		{
			q=p;
			while(*q>='0'&&*q<='9')
			{ q++;}
	        for(r=p;r<q;r++)
				cout<<*r;
			cout<<endl;
			p=q;
		}
		else p=p+1;
	}
	return 0;
}
