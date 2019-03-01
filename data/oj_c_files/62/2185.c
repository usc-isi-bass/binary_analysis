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
	char a[200],b[200];
	cin.getline(a,200);
	char *p=NULL;
	int flag=1,i=0;
	for(p=a;*p;p++)
	{   
		if(*p==' '&&flag==1)
			{
				flag=0;
				b[i++]=*p;
			}
		else if(*p==' '&&flag==0)
					;
		else 
		{
			flag=1;
			b[i++]=*p;
		}
	}
	b[i]='\0';
	cout<<b<<endl;
	return 0;
}
