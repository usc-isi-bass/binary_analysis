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
	char str[100],word[100][100]={'\0'};
	int i,j,k=0,a[100]={0},l;
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if (str[i]!=32)
		{
			word[k][a[k]]=str[i];
			a[k]++;
		}
		else k++;
	}
	for(i=k;i>0;i--)
		printf("%s ",word[i]);
	printf("%s",word[0]);
}
