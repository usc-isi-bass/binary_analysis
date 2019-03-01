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
	char Sentence[501];
	char *pos = Sentence, *shift = NULL;
	cin.getline(Sentence, 501);

	for ( ; *pos != '\0'; pos++)
	{
		if (*pos != ' ')
			cout << *pos;
		else
		{
			cout << *pos;
			shift = pos + 1;
			for ( ; *shift == ' '; )
				shift++;
			pos = shift;
			cout << *pos;
		}
	}
	cout << endl;
	return 0;
}