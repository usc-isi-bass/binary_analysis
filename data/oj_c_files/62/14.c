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
	char str[100];
	cin.getline(str, 100);
	char * p = str;
	int i, j;
	int count = 0;
	for (i = 0; *(p + i) != '\0'; i ++)
	{
		
		if(*(p+i) == ' ')
			count ++;
		if (count == 1 && *(p+i) != ' ')
		 count = 0;
		if( count >= 2 && *(str+i) != ' ')
		{
			for (j = i - count + 1; *(p+j) != '\0'; j ++)
			 *(p+j) = *(p+j + count - 1);
			i -= count;
			count = 0;
		}
		
	}
	for (p = str; p < str +strlen(str); p ++)
	cout << *p;
	cout << endl;
	return 0;
}