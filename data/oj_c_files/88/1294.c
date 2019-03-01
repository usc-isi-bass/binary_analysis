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
	char test[MAX_LENGTH];
	char *pTest=test;
	cin.getline(test,MAX_LENGTH);
	while(true) //??????
	{

		if(*pTest==0) break;

		if (*pTest>='0'&&*pTest<='9')  //????
		{
			cout<<*pTest;
			if (*(pTest+1)<'0' ||*(pTest+1)>'9')
				cout<<endl;
		}
		pTest++;
	}
	return 0;
}
