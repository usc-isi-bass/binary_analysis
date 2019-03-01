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

int main( )
{
	int n,i;
	cin>>n;
	char str[3000][45];
	for(i=0;i<n;i++)
		cin>>str[i];
	i=0;
	while(i<n)
	{
		int len=strlen(str[i]);
		cout<<str[i];
		i++;
		while(i<n)
		{
			len=len+strlen(str[i])+1;
			if(len<=80)
				cout<<' '<<str[i];
			else
			{
				cout<<endl;
				break;
			}
			i++;
		}
	}
	return 0;
}