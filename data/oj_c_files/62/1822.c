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
	char sentence[100], *p;
	cin.getline(sentence, 100);
	p = sentence;
	int len = strlen(sentence), i = 0;
	while(i < len)
	{
		if(*p != ' ')    
		{
			cout << *p++;
			i++;
		}
		else
		{
			cout << ' ';
			p++;
			i++;
			while(*p == ' ')
			{
				p++;
				i++;
			}
		}
	}

return 0;
}
	


