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
	char str[100];
	int i=0,flag = 0;
	gets(str);
//	cout<<str;
	
	while(str[i]!='\0')
	{
		if(str[i]!=' ')
		{
			cout<<str[i];
			i++;
			continue;
		}
		if(str[i]==' '&&flag==0)
		{
			if(str[i+1]==' ')
				flag=1;
			cout<<str[i];
		}
		else
		{
			if(str[i]==' '&&flag==1)
			{
				if(str[i+1]!=' ')
					flag=0;
			}
		}
		i++;
	}
	cout<<endl;
	return 0;
}