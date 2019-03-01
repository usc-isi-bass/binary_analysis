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
	int flag;                      /*????*/
	char a[40];                    /*?????*/
	char *p;                       
	gets(a);                       /*?????*/
	p=a;
	while(1)                       /*??????????*/
	{
		if(*p==NULL)                 
			break;
		if(*p>='0'&&*p<='9')       /*????*/
		{
			cout<<*p++;
			flag=1;
		}
		else if(flag==1)           /* ??????????*/
		{
			cout<<endl;
		    p++;
			flag=0;
		}
		else                       /*????????*/
			p++;
	}
	cout<<endl;
	return 0;
}

