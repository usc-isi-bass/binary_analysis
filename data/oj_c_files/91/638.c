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
	char sentence[101], change[101];
	int i;
	char *point = NULL;
	memset(change, '\0', sizeof(change));
	cin.getline(sentence, 101);
	point = sentence;
	for (i = 0; i < strlen(sentence) - 1; i++)
	{
		change[i] = *(point + i) + *(point + i + 1);
	}
	change[strlen(sentence) - 1] = *point + *(point + strlen(sentence) - 1);
	cout << change << endl;
	return 0;
}