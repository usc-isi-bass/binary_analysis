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
	char	s[1000][100];
	int	i;
	for (i=0,gets(s[i]); s[i][0]!='e'; gets(s[i])) i++;
	for (i--;i!=-1; i--) puts(s[i]);
	return 0;
}