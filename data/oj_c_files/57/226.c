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

struct word
{
	char string[30];
};
struct word word[50];

void main()
{
	int n,l,i;
	char temp[30];

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",word[i].string);
	}

	for(i=0;i<n;i++)
	{
		strcpy(temp,word[i].string);
		l=strlen(temp);
		if(temp[l-1]=='g'&&temp[l-2]=='n'&&temp[l-3]=='i')
		{
			temp[l-1]=NULL;
			temp[l-2]=NULL;
			temp[l-3]=NULL;
			strcpy(word[i].string,temp);
		}
		else if(temp[l-1]=='y'&&temp[l-2]=='l')
		{
			temp[l-1]=NULL;
			temp[l-2]=NULL;	
			strcpy(word[i].string,temp);
		}
		else if(temp[l-1]=='r'&&temp[l-2]=='e')
		{
			temp[l-1]=NULL;
			temp[l-2]=NULL;
			strcpy(word[i].string,temp);
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%s\n",word[i].string);
	}
}
