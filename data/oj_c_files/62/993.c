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
	char str1[200],str2[200] = "",*p,*q,i;
	p=str1;q=str2;
	cin.getline(str1,200);
	for(;*p!='\0';p++)
	{
		if(*p==' '&&*(p-1)==' ')//????????
			continue;
		else
		{
			*q=*p;
			q++;//?????????????????????????????
		}
	}
	for(i=0;str2[i]!='\0';i++)
	cout<<str2[i];//????
	cout<<endl;

	return 0;
}
