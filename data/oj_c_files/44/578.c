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
	int i=0,k=0,j=0,K=0,l=0;
	char str[12];
	for(i=0;i<6;i++)
	{
		cin>>str;
		for(k=0;str[k]!='\0';k++)
			K=k;
		if(str[0]==45)
		{
			cout<<str[0];
			for(j=K;j>=0;j--)
			{
				if(str[j]!=48)
				{
					l=j;
					break;
				}

			}
			for(j=l;j>1;j--)
				cout<<str[j];
			cout<<str[1]<<endl;
		}
		if(str[0]!=45)
		{
			for(j=K;j>=0;j--)
			{
				if(str[j]!=48)
				{
					l=j;
					break;
				}
			}
			for(j=l;j>0;j--)
				cout<<str[j];
			cout<<str[0]<<endl;
		}

	}
	return 0;
}

