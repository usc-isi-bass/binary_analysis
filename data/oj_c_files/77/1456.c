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
	char line[101], b;
	int len, count = 0;
	int i, j;
	int intline[101];
	cin.getline(line, 101);
	b = line[0];
	len = strlen(line);
	for (i = 0; i < len; i++)
	{
		if (line[i] == b)
			intline[i] = 1;				//1??boy
		else
			intline[i] = 2;				//2??girl, 3?????????????
	}
	while (count < len / 2)
	{
		for (i = 0; i < len; i++)		//????????????
		{
			if (intline[i] == 2)
				break;
		}
		for (j = i; j >= 0; j--)		//????????????????
		{
			if (intline[j] == 1)
				break;
		}
		intline[i] = 3;					//???????????
		intline[j] = 3;
		cout << j << " " << i << endl;
		count++;
	}
	return 0;
}