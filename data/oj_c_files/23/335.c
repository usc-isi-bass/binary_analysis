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
	char words[105]={0};
	int i=0,j=0,sum=0;
	cin.getline(words,101,'\n');
	while(words[i])
	{
		sum++;
		i++;
	}
	for(i=(sum-1);i>=0;i--)
	{
		if(words[i]==' ')
		{
			for(j=i+1;j<=(sum-1);j++)
			{
				if(words[j]==' ') break;
				cout<<words[j];
			}
			cout<<" ";
		}
	}
	for(i=0;i<sum;i++)
	{		
		if(words[i]==' ')break;
		cout<<words[i];
	}
	cin.get();cin.get();
	return 0;
}