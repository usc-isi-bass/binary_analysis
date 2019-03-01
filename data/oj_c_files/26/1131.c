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
	char Buffer[200] = {0} ;
	gets(Buffer) ;
	int count = 0;
	while (Buffer[count])
	{
		count ++ ;
	}
	for (int i = 0 ; i < count - 1 ; i ++)
	{
		if (Buffer[i] == ' ' && Buffer[i+1] != ' ')
		{
			cout<<Buffer[i];
		}
		else if (Buffer[i] != ' ')
		{
			cout<<Buffer[i];
		}
	}
	cout<<Buffer[count - 1]<<endl ;
	return 0;
}