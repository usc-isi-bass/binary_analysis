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
	char str[10]={'\0'};
	cin.getline(str,10);
	for(int i=strlen(str)-1;i>=0;i--)
	{
		cout<<str[i];
	}
	return 0;
}