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
	char  str[12],substr[5];
	while(cin>>str>>substr)
	{
	int size=0;
	for(int i=0;i<=10;i++)
	{
		if(str[i]=='\0')
			{size=i;
		break;}
	}
	int tmp=0;
	for(int i=0;i<size;i++)
	{
		if(str[i]>tmp)
		{
			tmp=str[i];
		}
	}
	int j=0;
	for(int i=0;i<size;i++)
	{
		if(str[i]==tmp)
		{
			j=i;break;
		}
	}
	for(int i=0;i<=j;i++)
	{
		cout<<str[i];
	}
	cout<<substr;
	if(j<size-1)
	{
		for(int i=j+1;i<size;i++)
		{
			cout<<str[i];
		}
	}
	cout<<endl;
	}
	return 0;
}