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
	char str[200];
	int i;
	for(i=0;i<200;i++)
	{
		str[i]='a';
	}
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!=' ')
		{
			cout<<str[i];
		}
		else
		{
			if(str[i+1]!=' ')
			{
				cout<<str[i];
			}
		}
	}
	cout<<endl;
	return 0;
}