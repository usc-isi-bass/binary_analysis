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
	double per;
	double SUM,sum=0;
	int len;
	char DNA[500];
	char dna[500];
	scanf("%lf",&per);
	scanf("%s",&DNA);
	scanf("%s",&dna);
	SUM=strlen(DNA);
	len=strlen(dna);
	if(SUM!=len)
	{
		printf("error\n");
		return 0;
	}
	for(int j=0;j<SUM;j++)
	{
		if(DNA[j]!='A'&&DNA[j]!='T'&&DNA[j]!='C'&&DNA[j]!='G')
		{
			printf("error\n");
			return 0;
		}
		if(dna[j]!='A'&&dna[j]!='T'&&dna[j]!='C'&&dna[j]!='G')
		{
			printf("error\n");
			return 0;
		}
	}

	for(int i=0;i<SUM;i++)
	{
		if(DNA[i]==dna[i])
		{
			sum++;
		}
	}
	SUM=sum/SUM;
	if(SUM>per)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}
