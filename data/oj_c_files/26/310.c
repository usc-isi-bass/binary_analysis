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

//??????????????????????????????????
//Goofy 2010 12 10
int main()
{
	char sen[length], *p=sen;
	int counter=0;
	gets(sen);
	while(*p != '\0')
	{
		if(*p != ' ')
		{
			cout<<*p;
			counter=0;
		}
		else if (counter==0)//?????
		{
			counter++;
			cout<<*p;
		}
		p++;
	}
	cout<<endl;
	return 0;
}