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
	int flag=0,i;
	char str1[80],str2[80];
	cin.getline(str1,80);
	cin.getline(str2,80);
	for( i=0;str1[i]!='\0'&&str2[i]!='\0';i++)
	{
	    if(str1[i]<91&&str2[i]<91)
		{
			if(str1[i]<str2[i]){cout<<'<'<<endl;flag=1;break;}
			else if(str1[i]>str2[i]){cout<<'>'<<endl;flag=1;break;}
			else continue;
		}
		 if(str1[i]>91&&str2[i]<91)
		{
			 str1[i]=str1[i]-32;
			 if(str1[i]<str2[i]){cout<<'<'<<endl;flag=1;break;}
			 else if(str1[i]>str2[i]){cout<<'>'<<endl;flag=1;break;}
			 else continue;
		}
		 if(str1[i]<91&&str2[i]>91)
		{
			 str2[i]=str2[i]-32;
			if(str1[i]<str2[i]){cout<<'<'<<endl;flag=1;break;}
			else if(str1[i]>str2[i]){cout<<'>'<<endl;flag=1;break;}
			else continue;
		}if(str1[i]>91&&str2[i]>91)
		{
			if(str1[i]<str2[i]){cout<<'<'<<endl;flag=1;break;}
			else if(str1[i]>str2[i]){cout<<'>'<<endl;flag=1;break;}
			else continue;
		}

	}
	if(flag==0)
	{if(str1[i]=='\0'&&str2[i]=='\0')cout<<'='<<endl;
	else if(str1[i]!='\0')cout<<'>'<<endl;
	else cout<<'<'<<endl;}
	return 0;
}
