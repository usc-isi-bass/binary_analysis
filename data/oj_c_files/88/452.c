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

/*???????4
  ????00948344 ??
  ?????2010//12/31
*/


int main()
{
	char str[31];
	gets(str);
	int len=strlen(str);
	int i,j;
	for(i=0;i<len;i++)
	{   
		if(str[i]=='0'&&str[i+1]=='0')
			continue;
		else if((str[i]=='0')&&((str[i+1]<'0')||(str[i+1]>'9')))
		{
			cout<<"0"<<endl;
		}
		else if(str[i]>'0'&&str[i]<='9')
		{
			for(j=i;j<len;j++)
			{
				if(str[j]<'0'||str[j]>'9')
				{
					i=j-1;
					break;
				}
				if(j==len-1)
					i=j;
				cout<<str[j];
			}
		    cout<<endl;
		}
	}
	return 0;
}