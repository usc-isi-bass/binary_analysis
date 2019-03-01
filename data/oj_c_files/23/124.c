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
	char sent[100];
	int n,i,j,k=0,m;
	gets(sent);
	n=strlen(sent);
	for(i=n-1;i>=0;i--)
	{	
		if(sent[i]==' ')
		{
			k++;m=i;
			for(j=i+1;sent[j]!=' '&&j<n;j++)
			{
				printf("%c",sent[j]);
			}
			printf(" ");
		}
	
	}	
	if(k==0)
		puts(sent);
	else
		for(i=0;i<m;i++)
			printf("%c",sent[i]);
	
}
