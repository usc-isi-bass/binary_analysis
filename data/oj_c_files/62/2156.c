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


int main( )
{
	char str[100000];
	cin.getline(str, 100000);

	int i;//flag?????????

	for (i = 1; str[i] != '\0'; )
	{
		if ( str[i] == ' ' && str[i+1] == ' ' )
		{
			for (int j=i+1; str[j]!='\0';j++)
				str[j]=str[j+1];
		}
		else 
			i++;
	}

	cout<<str;

	return 0;
}