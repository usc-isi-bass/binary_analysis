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
{	int i,len,n;
	char str[256],str2[256];
	scanf("%d",&n);
	while(n>0)
	{
		scanf("%s",str);
		len=strlen(str);
		for(i=0;i<len;i++)
		{
			if(str[i]=='A')
				str2[i]='T';
			if(str[i]=='T')
				str2[i]='A';
			if(str[i]=='C')
				str2[i]='G';
			if(str[i]=='G')
				str2[i]='C';
		}
		str2[len]='\0';
		printf("%s\n",str2);

		n--;
	}

	return 0;
}

