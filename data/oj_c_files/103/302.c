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


char UpperCase(char chr)
{
	if (chr>='a'&&chr<='z')
		return 'A'-'a'+chr;
	else return chr;
}
int main()
{
	char str[1000];
	int count=1;
	cin>>str;
	char chr=str[0];
	for (int i=1;str[i]!=0;i++)
	{
		if (UpperCase(chr)==UpperCase(str[i]))
			count++;
		else
		{
			printf("(%c,%d)",UpperCase(chr),count);
			count=1;
		}

		chr=str[i];

	}
	printf("(%c,%d)",UpperCase(chr),count);

	return 0;
}