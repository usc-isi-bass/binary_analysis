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
	int i,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		int len;
		int j;
		char line[256]={'\0'};
		scanf("%s",line);
		len=strlen(line);
		for(j=0;j<len;j++)
			switch(line[j])
		{
			case 'A': line[j]='T';continue;
			case 'T': line[j]='A';continue;
			case 'C': line[j]='G';continue;
			case 'G': line[j]='C';continue;
		}
		printf("%s\n",line);
	}
}