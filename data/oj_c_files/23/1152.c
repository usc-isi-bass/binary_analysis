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
	char str1[5000],str2[5000];
	int len=0,start,end,l,i,j;
    cin.getline(str1,5000);
	l=strlen(str1);
	for(i=0;i<l;i++)
	{
		if(str1[i]!=0)
		{len++;}
		if(str1[i]==' ')
		{
			str2[l-1-i]=' ';
			end=i-1;
			start=i-len+1;
			for(j=l-1-end;j<=l-1-start;j++)
			{str2[j]=str1[j+1+end+start-l];}
			len=0;
		}
	}
	for(i=0;i<len;i++)
	{str2[i]=str1[l-len+i];}
	for(i=0;i<l;i++)
	{cout<<str2[i];}
	return 0;
}
		