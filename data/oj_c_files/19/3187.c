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
	char str[100],str1[20][20]={'\0'},str2[20],str3[20];
	int num=0,j=0,i;
	cin.getline(str,100);
	cin.getline(str2,20);
	cin.getline(str3,20);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!=' ')
		{
		str1[num][j++]=str[i];
		}
		if(str[i]==' ')
		{
			num++;
			j=0;
		}
	}
	num=num+1;
	for(i=0;i<num;i++)
	{
		if(strcmp(str1[i],str2)==0)
		{
			strcpy(str1[i],str3);
		}
	}
	for(i=0;i<num-1;i++)
	{
		cout<<str1[i]<<" ";
	}
	cout<<str1[i]<<endl;
	return 0;
}