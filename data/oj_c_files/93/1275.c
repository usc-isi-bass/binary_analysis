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

//*****************************
//**?????3?5?7????**
//**?????               **
//**???2013.9.27          **
//**????5.cpp            **
int main() //???
{   
	int flag = 0;
	int a; //????a
	cin >> a; //????a
	if ( a % 3 == 0 ) //??a???3??
	{   
		if (flag == 0)
		{
			cout << "3";
			flag = 1;
		}
		else
			cout << " 3";
	} 
	if ( a % 5 == 0 ) //??a???5??
	{   
		if (flag == 0)
		{
			cout << "5";
			flag = 1;
		}
		else
			cout << " 5";
	} 
	if ( a % 7 == 0 ) //??a???7??
	{   
		if (flag == 0)
		{
			cout << "7";
			flag = 1;
		}
		else
			cout << " 7";
	} 
	if (a % 3 != 0 && a % 5 != 0 && a % 7 != 0)
		cout << "n" << endl; //??n
	return 0;
} //?????