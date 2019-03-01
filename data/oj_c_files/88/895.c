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
	char c[35],*p=c;
	gets(c);
	for(;*p!='\0';p++)
	{
		if(*p<='9'&&*p>='0')
			cout<<*p;
		else {
			if(*(p+1)<='9'&&*(p+1)>='0')
				cout<<endl;
			else continue;
		}
	}
	
	return 0;
}