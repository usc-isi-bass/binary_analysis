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
	char str[101];
	char *p;
	int i;
	cin.getline(str,101);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!=' ')
		{
			p=&str[i];
			cout<<*p;
			continue;
		}
		if(str[i]==' ')
			if(str[i-1]!=' ')
			{
				p=&str[i];
				cout<<*p;
				continue;
			}
	}
	cout<<endl;
	return 0;
}
