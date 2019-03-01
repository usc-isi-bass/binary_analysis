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
	int i,j=0,k=0;
	char s[10000];
	char word[100][100];
	char w1[100],w2[100];
	gets(s);
	gets(w1);
         gets(w2);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=' ')
		word[j][k++]=s[i];
		else
		{
			j++;k=0;
		}
	}
    for(i=0;i<=j;i++)
    if(strcmp(word[i],w1)==0)  strcpy(word[i],w2);
    for(i=0;i<j;i++)
    printf("%s ",word[i]);
    printf("%s",word[j]);
}