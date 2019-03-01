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
	char str[31];
	gets(str);

	char * p=str;


	int flag=0;
	while(p<str+strlen(str))
	{
		if((*p>='0')&&(*p<='9'))
			{
				cout<<*p;
				flag=1;
		    }
		else
			{  
				if(flag==1)
				   cout<<endl;
				flag=0;
		     }
		p++;
	}

	return 0;
}