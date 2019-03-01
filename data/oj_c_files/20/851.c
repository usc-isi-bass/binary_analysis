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
	int i=0;
	char max=0;
	char str[14],substr[4];
	char *p=str,*q=str;
	while(cin>>str>>substr)
	{
		i=0;
		max=*p;
		while(*(p+i)!='\0')
		{
			if(*(p+i)>max)
			{
				max=*(p+i);
				q=p+i;
			}
			i++;
		}
		for(i=11-(q-p+1);i>=1;i--)
		{
			*(q+i+3)=*(q+i);
		}
		for(i=1;i<=3;i++)
		{
			*(q+i)=substr[i-1];
		}
		cout<<str<<endl;
	}
	return 0;
}