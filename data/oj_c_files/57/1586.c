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
	int n,i,j;
	char word[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",word);
		j=strlen(word);
		if(word[j-3]=='i')
		{
			word[j-3]='\0';
		}
		else{
			word[j-2]='\0';
		}
		printf("%s\n",word);
	}
	return 0;
}