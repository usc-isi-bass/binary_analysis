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
	char str1[101],str2[101];
	gets(str1);
	char *p1,*p2;
	for(p1=str1,p2=str2;*p1!='\0';p1++)
	{
		if(*p1!=' ')
		{
			*p2=*p1;
			p2++;
		}
		if((*p1==' ')&&(*(p1+1)!=' '))
		{
			*p2=' ';p2++;
		}
	}
	*p2='\0';
	cout<<str2<<endl;
	return 0;
}