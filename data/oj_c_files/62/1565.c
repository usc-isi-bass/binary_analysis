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
	char *pointer=NULL;
	cin.getline(str,200);
	pointer=str;
	while(*pointer!='\0')
	{
		if(*pointer!=' ')
			{
				cout<<*pointer;
				pointer++;
		}
		else
		{
			while(*(pointer+1)==' ')
				
					pointer++;
			pointer++;
			cout<<' ';
		}
	}
	return 0;
}