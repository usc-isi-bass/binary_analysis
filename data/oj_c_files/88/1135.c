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
	char word[31];
	int i=0,flag=0,flags=0,j=0;
	int len=0;
	cin.getline(word,31,'\n');
	len=strlen(word);
	for(i=0;i<len+1;i++)
	{
		if(word[0]<'9'&&word[0]>'0')
		{
			if(word[i]>'9'||word[i]<'0')
			{
				if(flag==0)
				{
					for(j=flag;j<flags;j++)
					{
						cout<<word[j];
					}
				}
				else
				{
					for(j=flag+1;j<flags;j++)
					{
						cout<<word[j];
					}
				}
				if(flags-flag>1&&flag>0)
					cout<<endl;
				else if(flags-flag>=1&&flag==0)
					cout<<endl;
				flag=flags;
				flags++;
			}
			else
			{
				flags++;
			}
		}
		else
		{
			if(word[i]>'9'||word[i]<'0')
			{
				for(j=flag+1;j<flags;j++)
				{
					cout<<word[j];
				}
			
				if(flags-flag>1)
					cout<<endl;
				flag=flags;
				flags++;
			}
			else
			{
				flags++;
			}
		}
	}
	return 0;
}