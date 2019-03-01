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
	char str[100];
	int i=0;
	int flag=0;
	gets(str);
	while(str[i]!=0)
	{
		if(str[i]==' ')
			if(flag==0)
			{
				flag=1;
				cout<<str[i];
			}
			else;
		else
		{
			flag=0;
		    cout<<str[i];
		}
		i++;
	}
	return 0;

}