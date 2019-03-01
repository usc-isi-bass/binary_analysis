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
	double a,x;
	char dna1[500],dna2[500];
	int i,j=0,l1,l2,c=0;
	cin>>a>>dna1>>dna2;
	l1=strlen(dna1);
	l2=strlen(dna2);
	if(l1!=l2)
	{
		cout<<"error";
		c=1;
	}
	else
	{
		for(i=0;i<l1;i++)
		{
			if(dna1[i]!='A'&&dna1[i]!='T'&&dna1[i]!='G'&&dna1[i]!='C')
			{
				cout<<"error";
				c=1;
				break;
			}
			else if(dna2[i]!='A'&&dna2[i]!='T'&&dna2[i]!='G'&&dna2[i]!='C')
			{
				cout<<"error";
				c=1;
				break;
			}
		}
	}
	if(c==0)
	{
		for(i=0;i<l1;i++)
		{
			if(dna1[i]==dna2[i])
			{
				j=j+1;
			}
		}
		x=j*1.0/l1;
		if(x>a)
		{
			cout<<"yes";
		}
		else
		{
			cout<<"no";
		}
	}
	return 0;
}