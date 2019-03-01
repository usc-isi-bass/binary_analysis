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
	char c,last=0;
	cin.get(c);//??
	while (c!='\n')//??????
	{
		if (!((c==' ')&&(last==' ')))//???????????????????????
		{
		    cout <<c;//????????   
		}
		last=c;//“??”last
		cin.get(c);//???????
	}
	
	return 0;
}