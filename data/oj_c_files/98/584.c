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
	int n,i,m=0;
	struct word
	{
		char word[40];
		int len;
	} words[500];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",words[i].word);
		words[i].len=strlen(words[i].word);
	}
	printf("%s",words[0].word);
	m=words[0].len;
	for(i=1;i<n;i++)
	{
		m+=(words[i].len+1);
		if(m<=80) printf(" %s",words[i].word);
		else 
		{
			printf("\n");
			printf("%s",words[i].word);
			m=words[i].len;
		}
	}
	printf("\n");
}
