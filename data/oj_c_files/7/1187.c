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

char substring[256] = {0};
char S[256] = {0};
char replacement[256] = {0};


int main()
{
	
	while (cin >> S)
	{
		cin >> substring;
		cin >> replacement;

		char *p = strstr(S,substring);
		char *q = NULL;

		int i = 0;
	
		if (p != NULL)
		{
			for (q = S; q < p; q++)
			{
				cout << *q;
			}
			cout << replacement;
			for (q = p + strlen(substring); *q != '\0'; q++)
			{
				cout << *q;
			}
		cout << endl;
		memset(S,0,256);
		memset(substring,0,256);
		memset(replacement,0,256);
		}

else if (p == NULL)
{
cout << S << endl;
}
	}

	return 0;
}
