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


int cmp(int x,int y)
{
	if (x>y)
		return 1;
	else
		return 0;
}
int main()
{
	char str1[260],str2[260],str3[260];
	cin>>str1>>str2>>str3;
	int L=strlen(str2),len=strlen(str1),k,i;
	for (i=0;i<len;i++)
	{
		k=0;
		while(str2[k]==str1[i+k]&&k<L)
		{
			k++;
		}
		if(k==L)
		{
			break;
		}
	}
	if(i==len)
	{
		for(int q=0;q<len;q++)
		{
			cout<<str1[q];
		}
		return 0;
	}
	for(int q=0;q<i;q++)
	{
		cout<<str1[q];
	}
	cout<<str3;
	for(int q=i+strlen(str2);q<len;q++)
	{
		cout<<str1[q];
	}
	return 0;
}