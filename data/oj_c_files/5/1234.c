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
	double bl,jl;
	scanf("%lf",&bl);
	char dna1[501],dna2[501];
	scanf("%s",dna1);
	scanf("%s",dna2);
	int i,k=0,l,n=0;
	l=strlen(dna1);
	for(i=0;i<l;i++)
	{
		if((dna1[i]!='A'&&dna1[i]!='G'&&dna1[i]!='C'&&dna1[i]!='T')||(dna2[i]!='A'&&dna2[i]!='G'&&dna2[i]!='C'&&dna2[i]!='T'))
		{
			k++;
		}
	}
	if(k>0)
	{
		printf("error\n");
	}
	else
	{
		for(i=0;i<l;i++)
		{
			if(dna1[i]==dna2[i])
			{
				n++;
			}
		}
		jl=1.0*n/(l-1);
		if(jl>bl)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}


