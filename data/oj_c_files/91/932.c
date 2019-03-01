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

//*****************************************************************
//*???????????? ***************************************
//*??????? 1200012979 **************************************
//*???2012.12.4 ************************************************
//*****************************************************************
int main()
{
	char a[101], *p = a+1, *q = a;
    cin.getline(a, 101);               //??????p???????
    do                                 //????p--??
	{
		p--;
        cout << (char) (*p + *++p);    //??????
	}
	while(*++p != '\0');
	cout << (char)(*--p + *q) << endl; //????????????
	return 0;
}