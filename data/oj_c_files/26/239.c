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
	int count = 0, m;
	char sentence[101] = {0};
	char *p;
	cin.getline(sentence,100);
	p = sentence;
	m = strlen(sentence);
	while(p - sentence < m)
	{
		if(*p != ' ')
		{
			count = 0;
		}
		if(*p == ' ')
		{
			count ++;
		}
		if(count <= 1)
		{
			cout << *p;
		}
		p++;
	}
	return 0;
}