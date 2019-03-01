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
	char str[35];
	int i;
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(*(str+i)>='0'&&*(str+i)<='9')
		{
			cout<<*(str+i);
		}
		else
		{
			if(*(str+i+1)>='0'&&*(str+i+1)<='9')
			{
				cout<<endl;
			}
		}
	}
	if(*(str+strlen(str)-1)>='0'&&*(str+strlen(str)-1)<='9')
	{
		cout<<endl;
	}
	else
	{
		;
	}
	return 0;
}