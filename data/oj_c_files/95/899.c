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
	char str1[80],str2[80];//????
	int length1,length2,i,a;//??1???2?????????
	cin.getline(str1,80);//????
	cin.getline(str2,80);
	length1=strlen(str1);//????
	length2=strlen(str2);
	for (i=0;i<=length1-1;i++)//???1??????????
	{
		if ((str1[i]<='z')&&(str1[i]>='a'))
			str1[i]=str1[i]-32;
	}
	for (i=0;i<=length2-1;i++)//???2??????????
	{
		if ((str2[i]<='z')&&(str2[i]>='a'))
			str2[i]=str2[i]-32;
	}
	a=strcmp(str1,str2);//??????
	if (a==0) cout<<"="<<endl;
	if (a==1) cout<<">"<<endl;
	if (a==-1) cout<<"<"<<endl;
	return 0;
}
