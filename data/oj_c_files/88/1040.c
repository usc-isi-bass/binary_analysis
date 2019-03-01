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
	char str[31];
	cin.getline(str,31);
	char *p=str;//????str???p
	while(*p!='\0')
	{
		if(*p>=48 && *p<=57)//????????
		{
			cout<<*p;
			p++;
		}
		else//?????????
		{
			cout<<endl;
			do
			{
				p++;
			}
			while((*p<48 || *p>57) && (*p!='\0'));//???????????????
		}
	}
	return 0;
}