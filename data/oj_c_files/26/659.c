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
	char m[1000];
	int i,flag=0,len;
	cin.getline(m,1000);
	len=strlen(m);
	for(i=0;m[i]!='\0';i++)
	{
		if(m[i]==' ')
		{
			if(flag==0)
			{
				continue;
			}
			else
			{
				flag=0;
				cout<<m[i];
			}
		}
		else
		{
			flag=1;
			cout<<m[i];
		}
	}
	cout<<endl;
	return 0;
}

