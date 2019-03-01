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
	int n,i,j,len;
	char word[33];
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%s",word);
		len=strlen(word);
		if(word[len-1]=='r')
		{
			for(i=0;i<len-2;i++)
				printf("%c",word[i]);
		}
		else if(word[len-1]=='y')
		{
			for(i=0;i<len-2;i++)
				printf("%c",word[i]);
		}
		else 
		{
			for(i=0;i<len-3;i++)
				printf("%c",word[i]);
		}
		printf("\n");
	}
	return 0;
}