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
	int i,sgn=0;
	char str1[100],str2[100];
	cin.getline(str1,80);
	cin.getline(str2,80);
	for(i=0;str1[i]!='\0'&&str2[i]!='\0';i++)	//????????
	{
		if(str1[i]<str2[i])
		{
			if(str1[i]>=97||str2[i]<97)
			{
				cout<<'<';
				sgn=1;
				break;
			}
			else if(str1[i]+32>str2[i])
			{
				cout<<'>';
				sgn=1;
				break;
			}
			else if(str1[i]+32<str2[i])
			{
				cout<<'<';
				sgn=1;
				break;
			}
		}
		if(str1[i]>str2[i])
		{
			if(str2[i]>=97||str1[i]<97)
			{
				cout<<'>';
				sgn=1;
				break;
			}
			else if(str2[i]+32>str1[i])
			{
				cout<<'<';
				sgn=1;
				break;
			}
			else if(str2[i]+32<str1[i])
			{
				cout<<'>';
				sgn=1;
				break;
			}
		}
	}
	if(sgn==0)		//?????????
		cout<<'=';
	return 0;
}