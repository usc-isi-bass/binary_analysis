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
	int c;
	char getline[MAX];
	int i=0;
	int ex=IN;
	int line=0;
	while ((c=getchar())!='\n')
	{
		if (c!=' ')
		{
			ex=IN;
			getline[i]=c;
			++i;
		}
		else if ((c==' ')&&(ex==IN))
		{
			getline[i]=c;
			++i;
			ex=OUT;
		}
		else if ((c==' ')&&(ex==OUT))
			ex=OUT;
	}
	line=i;
	i=0;

	for (i=0;i<line;++i)
		putchar(getline[i]);

}
