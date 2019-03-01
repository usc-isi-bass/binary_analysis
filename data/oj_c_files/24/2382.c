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
	char word[2000];
	int length[200] = {0}, location[200], leap = 0, i, j = 0, max = 0, min = 2000, location1, location2;
	cin.getline(word, 2000);
	for (i = 0; i < 200; i++)
		location[i] = -1;
	i = 0;
	while (word[i] != '\0')
	{
		if ((word[i] == ' '|| word[i] == ',') && leap)
		{
			leap = 0;
			j++;
		}
		else if (word[i] != ' ' && word[i] != ',' && !leap)
		{
			leap = 1;
			location[j] = i;
			length[j]++;
		}
		else if (word[i] != ' ' && word[i] != ',' && leap)
			length[j]++;
		i++;
	}
	for (i = 0; i < 200; i++)
		if (length[i] > 0 && location[i] > -1)
		{
			if (length[i] > max)
			{
				max = length[i];
				location1 = i;
			}
			if (length[i] < min)
			{
				min = length[i];
				location2 = i;
			}
		}
	for (i = location[location1]; i < location[location1] + length[location1]; i++)
		cout << word[i];
	cout << endl;
	for (i = location[location2]; i < location[location2] + length[location2]; i++)
		cout << word[i];
	return 0;
}