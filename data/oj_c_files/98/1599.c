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

/*
 * Typesetting.cpp
 *
 *  Created on: 2013-12-5
 *      Author: KEVIN
 */


int main()
{
	int n;
	cin>>n;
	char line[81];
	char* p=line;
	memset(line,'\0',81);
	while(n--)
	{
		char word[41];
		cin>>word;
		int len=strlen(word);
		if(strlen(line)+len>80)
		{
			*(p-1)='\0';//?line???????'\0'
			cout<<line<<endl;
			memset(line,'\0',81);
			p=line;
		}
		memcpy(p,word,len);
		p+=len;
		*p++=' ';
	}
	if(strlen(line)>0)
	{
		*(p-1)='\0';
		cout<<line;
	}
	return 0;
}
