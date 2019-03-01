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

void main()
{
	char s[2][81];
	int i,j,k;
	for (i=0;i<2;i++)
	{
		gets(s[i]);
		for (j=0;s[i][j]!='\0';j++)
		{
			if ((s[i][j]>='a')&&(s[i][j]<='z')) s[i][j]=s[i][j]-32;
		}
	}
	k=strcmp(s[0],s[1]);

	if (k>0) printf(">");
	if (k==0) printf("=");
	if (k<0) printf("<");
}
