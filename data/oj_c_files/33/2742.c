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
	int n,len,i,j;
	char str[256],s;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		len=strlen(str);
		for(j=0;j<len;j++)
		{
			if(str[j]=='A')
				s='T';
			if(str[j]=='T')
				s='A';
			if(str[j]=='C')
				s='G';
			if(str[j]=='G')
				s='C';
			if(j<len-1)
				printf("%c",s);
			else
				printf("%c\n",s);
		}

	}
	return 0;
}