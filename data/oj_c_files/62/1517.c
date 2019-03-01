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

//******************
//???????****
int main()
{
	char str[201];
	gets(str);
	int len;
	len=strlen(str);
	
	for(int i=0;i<len;i++)
	{
		if(str[i]!=' ')
			cout<<str[i];
		else
		{
			if((str[i]==' ')&&(str[i+1]!=' '))
				cout<<str[i];
			if((str[i]==' ')&&(str[i+1]==' '))
				continue;
		}
	}
	return 0;
}
