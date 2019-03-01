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

//************************
//*????????? **
//*?????? **
//*???1200012957 **
//*???2012-12-09 **
//************************

void moveforward(char *p)
{
	for( ; *p != '\0'; p++ )
	{
		*p = *(p + 1);
	}
}

int main ()
{
	char str[100];
	cin.getline(str, 100);
	char *p = str;
	for ( ; *p != '\0'; p++ )
	{
		if (*p == ' ' && *(p - 1) == ' ')
		{
			moveforward(p);
			p-- ;
		}
	}
	cout << str << endl;
    
	return 0;
}