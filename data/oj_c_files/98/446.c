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
	char str[100000],*p = NULL;
	int n,count = 0;
	cin >> n;
	cin.get();
	cin.getline(str,10000);
	p = str;
    for(p = str; *p != '\0';p++)
	{
		count++;
		if(count == 81)
		{
		   if(*p != ' ')
			{
				while(*p != ' ')
					p--;
			}
            *p = '\n';
			count = 0;
		}
		
	}
	for(p = str; *p != '\0'; p++)
	{
	        cout << *p;
	}
	cout << endl;
		return 0;
}