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
	char x[101];
	cin.getline(x,	101);
	int i,	n1,	j;
	n1	=	strlen(x);
	for(i	=	0;	i	<	n1;	i++)
	{
		if(x[i]	==	' ')
		{
			int count	=	0;
			for(j	=	i	+	1;	j	<	n1;	j++)
			{
				if(x[j]	==	' ')
				{
					count++;
				}
				else
				{
					break;
				}
			}
		    strcpy(x	+	i,	x	+	i	+	count);
			n1	=	n1	-	count;
		}
	}
	cout	<<	x	<<	endl;
	return 0;
}
