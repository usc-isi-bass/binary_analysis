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
	char a[101],*p_a=NULL;
	gets(a);
	p_a=a;
	

	int flag=1;

	while(p_a<(a+strlen(a)))
	{
		if(flag==1)
			{
				cout<<*p_a;
				if(*p_a==' ')
					flag=0;
				*p_a++;
				continue;
		   }
		else
		{
			if(*p_a!=' ')
			{
				flag=1;
				cout<<*p_a;
			}
				*p_a++;
				continue;
			
		}
	}
	cout<<endl;
			     
	return 0;
}
