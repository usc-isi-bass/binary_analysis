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

//#include<stdafx.h>

void main()
{
	char str[300],*p;
	int a[26]={0},i,flag;

	gets(str);
	for(p=str;*p!='\0';p++)
	{
		for(i=0;i<26;i++)
			if(*p==i+'a')
				a[i]++;
	}
	for(i=0,flag=0;i<26;i++)
	{
		if(a[i]>0)
		{printf("%c=%d\n",i+'a',a[i]);flag=1;}
	}
	if(!flag)
		printf("No");
}