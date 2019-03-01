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


int main(int argc, char* argv[])
{
	struct word{
		int num;
		char words[46];
	}word[1000];
	int n;
	scanf("%d",&n);
	int i,j,m;
	for(i=0;i<n;i++)
	{
		scanf("%s",&word[i].words);
		for(j=0;word[i].words[j]!='\0';j++){}
		word[i].num=j;
	}
	j=0;
	m=0;

	int max=80;
	int length=word[0].num+1;
         printf("%s",word[0].words);
	for(i=1;i<n;i++)
	{
                  
		if(word[i].num<=max-length)
		{
			printf(" %s",word[i].words);
			length=length+word[i].num+1;
		}
		else if(word[i].num>max-length)
		{
			printf("\n%s",word[i].words);
			length=word[i].num+1;
		}
	}
	return 0;
}