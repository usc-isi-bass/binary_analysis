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
	int n;
	char word[100];
	char *p;
	int i,len;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		memset(word,'\0',sizeof(word));
		p=word;
		scanf("%s",word);
		len=strlen(word);
		p=p+len-2;
		if(*p=='e')
		{
			*p='\0';
			printf("%s\n",word);
		}
		else if(*p=='l')
		{
			*p='\0';
			printf("%s\n",word);
		}
		else
		{
			*(p-1)='\0';
			printf("%s\n",word);
		}
	}

	return 0;
}