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
	char st[200],word[50][50]={""};
	gets(st);
	int i,j=0,l,number=0;
	l=strlen(st);
	
	for(i=0;i<l;i++)
	{
		if(st[i]!=' ')
			word[number][j++]=st[i];
		else if(st[i]==' '&&st[i+1]!=' ')
		{
			word[number++][j]='\0';
			j=0;
		}
	}
	word[number][j]='\0';
	for(i=number;i>0;i--)
	{
		printf("%s",word[i]);
		printf(" ");
	}
	printf("%s",word[0]);
	return 0;
}

