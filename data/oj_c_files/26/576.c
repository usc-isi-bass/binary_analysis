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
	char str[101]={0};
	const char temp=' ';
	int x=0,i=0,j=0,count=0;
	cin.get(str,101);
	x=strlen(str);
	for(i=1;i<=x-3;i++)
	{
		if(str[i]==temp&&str[i+1]==temp)
		{
			for(j=i;j<=x-1;j++)
			{
				str[j]=str[j+1];
			}
			i=i-1;
		}
	}
	cout<<str;
	return 0;
}