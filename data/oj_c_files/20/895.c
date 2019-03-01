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
	char word[20],in[4];
	//char temp[20];
	char *p,*q;
	while(cin>>word>>in)
	{
		p=word;
		q=word;
		while(1)
		{
			if(*p=='\0')break;
			if(*p-*q>0)q=p;
			p++;
		}
		p=word;
		while(1)
		{
			if(*p=='\0')
			{
				cout<<endl;
				break;
			}
			cout<<*p;
			if(p==q)
				cout<<in[0]<<in[1]<<in[2];
			p++;
		}
	}
	return 0;
}