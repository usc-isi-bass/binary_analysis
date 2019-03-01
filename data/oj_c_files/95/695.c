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
	int a,k;
	char str1[80],str2[80];
	cin.getline(str1,80);
	cin.getline(str2,80);//????2????
	for(k=0;k<80;k++)//?????????????
	{
		if('Z'>=str1[k]&&str1[k]>='A')
			str1[k]+=32;
		else continue;
	}
	for(k=0;k<80;k++)
	{
		if('Z'>=str2[k]&&str2[k]>='A')
			str2[k]+=32;
		else continue;
	}
	a=strcmp(str1,str2);//??2??????????a
	if(a==0)
		cout<<"=";
	else if(a==1)
		cout<<">";
	else if(a==-1)
		cout<<"<";//??a??????
	return 0;

}