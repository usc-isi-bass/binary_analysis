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
	char s[100][15],t[150];
	int i,j=0,k=0,m;
	gets(t);
	s[0][0]=t[0];
	for(i=1;i<strlen(t);i++)
	{
		if(t[i]!=' '&&t[i-1]==' ')
		{    k=0;
			j++;
			s[j][k]=t[i];
		}
		if(t[i]!=' '&&t[i-1]!=' ')
		{
			k++;
			s[j][k]=t[i];
		}
		if(t[i]==' ') s[j][k+1]='\0';
	}
	s[j][k+1]='\0';

	m=j;
	for(m=j;m>=1;m--)
	{
		printf("%s ",s[m]);
	}
	printf("%s",s[0]);
}