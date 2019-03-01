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

/*Liloy Iris 2012.11.9*/
int main()
{
	char c;                                  //????c
	cin.get(c);                              //??c
	while (c!='\n')                          //?c??????,????
	{
		if (c!=' ')                     //?c?????,??c
			cout<<c;
		else
		{
			cout<<c;
			while (c==' ')         //???????
			{
				cin.get(c);
			}
			cout<<c;
		}
		cin.get(c);
	}
	return 0;
}