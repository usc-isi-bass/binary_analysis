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
	int i = 0;
	int max[2] = {0, 0};
	int min[2] = {100, 0};
	char word[200][100];
	int leg[200];
	while(scanf("%s", word[i]) != EOF)
	{
		leg[i] = strlen(word[i]);
		if (leg[i] > max[0])
		{
			max[0] = leg[i];
			max[1] = i;
		}
		if (leg[i] < min[0])
		{
			min[0] = leg[i];
			min[1] = i;
		}
		i++;
	}
	cout << word[max[1]] << endl;
	cout << word[min[1]] << endl;
	return 0;
}