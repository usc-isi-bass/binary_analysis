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
	char a[30],n=0;
	char *p;
	p=a;
	cin.getline(a,31,'\n');
	for(;*p!='\0';p++)
	{
		n++;
	}
	for(p=a;*p!='\0';p++)
	{
		if(*p-'0'>=0&&*p-'0'<=9)
		{
				cout<<*p;
				{
					if((p+1)<(a+n)&&(*(p+1)-'0'<0||*(p+1)-'0'>9))
						 cout<<endl;
				}
		}
	
	}
         return 0;
}



