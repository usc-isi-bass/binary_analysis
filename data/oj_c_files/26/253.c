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
	char a[200],*p=a;
	int q=1;
	cin.getline(a,200);
	for(;*p!='\0';p++)
	{
		
		if(*p!=' ')
		{
			q=1;
		}
		if(q==1)
		{
			cout<<*p;
		}
			
		if(*p==' ')
		{
			q=0;
		}
		
	}
	return 0;
}
	