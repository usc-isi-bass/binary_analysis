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
	char str[200],*point=str;
	cin.getline(str,150);
	for(;point<=str+strlen(str)-1;point++)
	{
		if(*point>='0'&&*point<='9')
		{
			while(*point>='0'&&*point<='9')
			{
				cout<<*point;
				point++;
			}
			cout<<endl;
		}
	}
	return 0;
}