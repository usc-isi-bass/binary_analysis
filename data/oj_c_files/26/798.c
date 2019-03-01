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
	char str[100],m[100];
	int count=0;
	char *p,*q=m;
	gets(str);
	for(p=str;*p!='\0';p++)
	{
		if(*p!=' ')
		{
			*q=*p;
			q++;
			count=0;
		}
		if(*p==' ')
		{
			count++;
		}
		if(count==1)
		{
			*q=' ';
			q++;
		}
	}
	*q='\0';
	cout<<m<<endl;
	return 0;
}
