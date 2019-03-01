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

int main ()
{
	int n,i,line = 0,count = 0;
	char ch[45], *p;
	cin >> n;
	for (i = 1; i<= n;i++)
	{
		cin >> ch;
		p = ch;
		while (*p !='\0' )
		{
			p++;
			count++;
		}
		if (line +  count <= 80 && line == 0)
		{
			line = count;
			cout << ch;
			count = 0;
			continue;
		}
		if(line + count  + 1<= 80)
			{
				cout << ' ' << ch;
				line = count +1  + line;
				count = 0;
				continue;
			}
		if (line + count + 1> 80)
		{
			cout << endl;
			cout << ch;
			line =  count;
			count = 0;
		}
		
	}
	return 0;
}








