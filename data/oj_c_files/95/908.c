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

/*??????????*/
int main()
{
	char str1[81];
	char str2[81];
	cin.getline(str1,81);
	cin.getline(str2,81);//???????
	int i;
	int a=strlen(str1);
	int b=strlen(str2);//???????????
	for(i=0;i<a;i++)
	{
		if(str1[i]<='Z' && str1[i]>='A')
		{
			str1[i]=str1[i]+32;
		}
	}
	str1[a]='\0';
	for(i=0;i<b;i++)//?????????????????
	{
		if(str2[i]<='Z' && str2[i]>='A')
		{
			str2[i]=str2[i]+32;
		}
	}
	str2[b]='\0';
	if(strcmp(str1,str2)<0)//????????????
	{
		cout<<'<'<<endl;
	}
	else if(strcmp(str1,str2)>0)
	{
		cout<<'>'<<endl;
	}
	else
	{
		cout<<'='<<endl;
	}
	return 0;
}