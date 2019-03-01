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
	int n;
	char b[100];
	gets(b);
	n=atoi(b);
	int i;
	for(i=0;i<n;i++)
	{
		char dna[255];
		int j;
		gets(dna);
		for(j=0;(dna[j])!='\0';j++)
		{
		//	scanf("%c",&dna[j]);
			if(dna[j]=='A')
			{
				dna[j]='T';
			}
			else if(dna[j]=='T')
			{
				dna[j]='A';
			}
			else if(dna[j]=='C')
			{
				dna[j]='G';
			}
			else
			{
				dna[j]='C';
			}
		}
		for(j=0;(dna[j])!='\0';j++)
		{
			printf("%c",dna[j]);
		}
		printf("\n");
	}
	return 0;
}