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
	char ori[999][256],tra[999][256];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",ori[i]);
	for(i=0;i<n;i++)
	{
		len=strlen(ori[i]);
		for(j=0;j<len;j++)
			switch(ori[i][j])
		   {
			case'A':tra[i][j]='T';break;
			case'T':tra[i][j]='A';break;
			case'G':tra[i][j]='C';break;
			case'C':tra[i][j]='G';
		   }
		tra[i][len]='\0';
	}
	for(i=0;i<n;i++)
		printf("%s\n",tra[i]);

	return 0;
}