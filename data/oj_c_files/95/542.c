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

void main ()
{
	char s[2][80];
	int i,j;
	for(i=0;i<2;i++)
	{
		gets(s[i]);
		for(j=0;j<80;j++)
		{
			if(s[i][j]<='Z'&&s[i][j]>='A')
				s[i][j]=s[i][j]+32;
		}
	}
	if(strcmp(s[0],s[1])>0)
		printf(">\n");
	if(strcmp(s[0],s[1])<0)
		printf("<\n");
	if(strcmp(s[0],s[1])==0)
		printf("=\n");
}