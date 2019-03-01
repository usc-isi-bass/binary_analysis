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
	int n,i,k,j;
	char word[1000],c;
	scanf("%d",&n);
c=getchar();
	for(i=0;i<n;i++)
	{
		gets(word);
		k=strlen(word);
		for(j=0;j<k;j++)
		{
			if(word[j]=='A')
				printf("T");
			if(word[j]=='T')
				printf("A");
			if(word[j]=='G')
				printf("C");
			if(word[j]=='C')
				printf("G");
		}
		if(j==k)
			printf("\n");
	}
}