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
	scanf("%d",&n);
	int i,j;
	char s[30];
	
	int len;
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		len=strlen(s);
		if((s[len-1]=='r')&&(s[len-2]=='e'))
		{
			for(j=0;j<len-2;j++)
			{printf("%c",s[j]);}
		}
		else if((s[len-1]=='y')&&(s[len-2]=='l'))
		{
			for(j=0;j<len-2;j++)
			{
				printf("%c",s[j]);}
		}
		else
		{ for(j=0;j<len-3;j++)
		{printf("%c",s[j]);}
		}
		printf("\n");
	}
	return 0;
}
	   
