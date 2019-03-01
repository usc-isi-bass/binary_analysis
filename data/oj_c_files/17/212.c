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

int deal();
char ori[101]={"\0"};
int out[101]={0};
int main()
{
	int i;
	while(cin.getline(ori,101))
	{
		deal();
		cout<<ori<<endl;
		for (i=0;ori[i]!='\0';i++)
		{
			if (out[i]==1)
				cout<<'$';
			else if (out[i]==2)
				cout<<'?';
			else
				cout<<' ';
		}
		cout<<endl;
	}
	return 0;
}
int deal()
{
	int i,j;
	for (i=0;ori[i]!='\0';i++)
	{
		if (ori[i]=='(')
			out[i]=1;
		else if (ori[i]==')')
			out[i]=2;
		else
			out[i]=0;
	}
	for (i=0;ori[i]!='\0';i++)
	{
		if (out[i]==2)
		{
			for (j=i;j>=0;j--)
			{
				if (out[j]==1)
				{
					out[i]=0;
					out[j]=0;
					break;
				}
			}
		}
	}
	return 0;
}
