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

char * strpos(char string[], char substring[])
{
	char *p = string;
	char *temp = NULL;
	while(*p != '\0')
	{
		if (*p == substring[0])
		{
			temp = p;
			p++;
			int i;
			for (i = 1; i < strlen(substring); i++)
			{
				if (*p != substring[i])
				{	
					break;
				}
				p++;
			}
			if (i == strlen(substring))
				break;
			else
				p = temp + 1;
		}
		else
			p++;
	}
	return temp;
}
int main()
{
	char string[256], substring[256], replacement[256];
	cin.getline(string, 257);
	cin.getline(substring, 257);
	cin.getline(replacement, 257);
	char *p = strpos(string, substring);
	if (p != NULL)
	{
		int t = 0, count = 0;
		while (count != strlen(substring))
		{
			*p = replacement[t++];
			p++;
			count++;
		}
	}
	cout << string << endl;
	return 0;
}