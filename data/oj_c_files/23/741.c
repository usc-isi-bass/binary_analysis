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
	char s[105];
	char t[100][100];
	int i,j,k;

	gets(s);

	j=0;
	k=0;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!=' ')
		{
			t[j][k]=s[i];
			k++;
		}

		if(s[i]==' ')
		{
			t[j][k]=0;
			k=0;
			j++;
		}
	}
	t[j][k]=0;


//	printf("%s",t[0]);
//	getchar();

	for(i=j;i>0;i--)
		printf("%s ",t[i]);
	printf("%s\n",t[0]);
}