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
	char a[101],i;
	cin.getline(a,101);
	char *p1=a;
	for(;*p1!='\0';p1++)
	{
		if(*p1!=' ')
			cout<<*p1;
		if(*p1==' ')
		{
			if(*(p1+1)!=' ')
				cout<<" ";
		}
	}
	cout<<endl;
	return 0;
}