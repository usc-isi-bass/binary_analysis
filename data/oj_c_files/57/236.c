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


void delete3(char t[],int length);
void delete2(char t[],int length);

void main()
{
	char word[50][30];
	int n;
	int i,j;
	int length;

	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",word[i]);
	}
	for (i=0;i<n;i++)
	{
		length=strlen(word[i]);
		if (word[i][length-1]=='g')
			delete3(word[i],length);
		else
			delete2(word[i],length);
		printf("%s",word[i]);
		if (i!=n-1)
			printf("\n");
	}
}


void delete3(char t[],int length)
{
	t[length-3]='\0';
}

void delete2(char t[],int length)
{
	t[length-2]='\0';
}