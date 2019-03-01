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
	int i,j,len;
	char s[100];
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if((s[i]>='0')&&(s[i]<='9'))
		{
			for(j=i;;j++)
			{
				if((s[j]>='0')&&(s[j]<='9'))	
				{
					cout<<s[j];
					s[j]='*';
				}
				else
					break;
			}
			cout<<endl;
		}
	}
	cout<<endl;
	return 0;
}
