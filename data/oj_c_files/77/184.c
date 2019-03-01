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

void paidui(char str [])
{
	int i=0,k=0;
	for(i=1;i<strlen(str);i++)
	{
		if(str[i]!=str[0])
		{
			for(k=i-1;k>=0;k--)
			{
				if(str[k]==str[0])
				{
					cout<<k<<' '<<i<<endl;
					
				
				str[k]=' ';
				str[i]=' ';
				break;
				}
			
				
			}
		}
	}
}
int main()
{
	char str[100];
	cin.getline(str,101);
	paidui(str);
	return 0;
}
			
