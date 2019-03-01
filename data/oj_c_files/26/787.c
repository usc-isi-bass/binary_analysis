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
	char input[200];
	char *a=input;
	int i;
	cin.getline(a,200,'\n');
	while(*a!='\0')
	{	
		if(*(a-1)==' '&&*a==' ')
			a++;
		else
		{
			cout<<*a;
			a++;
		}
	}
	return 0;
}