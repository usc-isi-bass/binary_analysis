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
	char a[101];
	char *p;
	cin.getline(a,101);
	p=a;
	int i=0,j=0;
	while (*p!='\0')
	{
		if(*p=='-')
		{
			i=1;
			p++;
			if(j==1)
			{
				cout<<endl;
				j=0;
			}
		}
		else if(((*p=='0')||(*p=='1')||(*p=='2')||(*p=='3')||(*p=='4')||(*p=='5')||(*p=='6')||(*p=='7')||(*p=='8')||(*p=='9'))&&(i==0))
		{
			cout<<*p;
			p++;
			j=1;
		}
		else if(((*p=='0')||(*p=='1')||(*p=='2')||(*p=='3')||(*p=='4')||(*p=='5')||(*p=='6')||(*p=='7')||(*p=='8')||(*p=='9'))&&(i==1))
		p++;
		else  
		{
			p++;
			i=0;
			if(j==1)
			{
				cout<<endl;
				j=0;
			}
		}	
	}
	return 0;
}