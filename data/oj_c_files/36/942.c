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
	char str1[101], str2[101];
	int i,j,len1,len2;
	cin>>str1>>str2;
	len1=strlen(str1);
	len2=strlen(str2);
	if(len1!=len2)
	{
		cout<<"NO";
		return 0;
	}
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
			if(str1[i]==str2[j])
			{
				str2[j]=0;
				break;
			}
		}
		if(j==len2)
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}