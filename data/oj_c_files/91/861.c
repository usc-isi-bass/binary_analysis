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

//**********************************************
//****??????    1200012772****************
//****??????????      ****************
//****???2012?12?8?       ****************
//**********************************************
int main()
{
	char str1[102],*p = NULL,temp;
	cin.getline(str1, 102);
	p = str1;
	int l = strlen(str1);
	str1[l] = str1[0];
	for( ; *p != '\0'; p++)
	{
		temp = *p;
		*p = temp + *(p + 1);
	}
	str1[l] = '\0';
	cout << str1;
	return 0;
}