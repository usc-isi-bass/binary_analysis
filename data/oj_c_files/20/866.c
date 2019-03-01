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

//********************************************************
//*??????????.cpp                              *
//*??????                                          *
//*?????2010?12?18?                              *
//********************************************************
int main()
{
	char substr[3]={'\0'};//?????
	char str[10]={'\0'};
	char out[13]={'\0'};//?????
	int length=0;
	int i=0;
	int j=0;
	char temp='\0';
	int num=0;
	while (cin>>str>>substr)//??????
	{
		length=strlen (str);//???????
		for(i=0;i<length;i++)//?????????
		{
			if(str[i]>temp)
			{
				temp=str[i];
				num=i;
			}
		}
		for(i=0;i<=num;i++)//????????????????
		{
			out[i]=str[i];
		}
		strcat(out,substr);//????????????
		for(i=num+4,j=num+1;i<(length+3)&&j<length;i++,j++)//?????
		{
			out[i]=str[j];
		}
		num=0;//??????
		temp='\0';
		cout<<out<<endl;
		for(i=0;i<13;i++)//??????????
		{
			out[i]='\0';
		}
	}
	
	return 0;
}