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
	int x[21],	i,	n,	y[100];
	x[1]	=	1;
	x[2]	=	1;
	for(i	=	3;	i	<	21;	i++)
	{
		x[i]	=	x[i	-	1]	+	x[i	-	2];
	}
	cin	>>	n;
	for(i	=	0;	i	<	n;	i++)
	{
		cin	>>	y[i];
	}
	for(i	=	0;	i	<	n;	i++)
	{
		cout	<<	x[y[i]]	<<	endl;
	}
	return 0;
}