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
	char word_in[1000],word_out[1000];
	int sum,k=0;
	for(int i=0;i<1000;i++)
	{
		word_in[i]=0;
		word_out[i]=0;
	}
	cin.getline(word_in,1000);
	sum=strlen(word_in);
	for(int i=0;i<sum;i++)
	{
		if(word_in[i]!=32)
		{
			word_out[k]=word_in[i];
			k++;
		}
		if(word_in[i]==32)
		{
			if(word_in[i+1]!=32)
			{
				word_out[k]=word_in[i];
				k++;
			}
		}
	}
	sum=strlen(word_out);
	for(int i=0;i<sum;i++)
	{
		cout<<word_out[i];
	}
	return 0;
}
