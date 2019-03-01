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
	char str1[100],str2[100]={'\0'},str3[2];//str1?str2????????????????str3?????????
	int i;
	cin.getline(str1,100);
	for(i=0;i<strlen(str1);i++)//???????????????str2
	{
		if(str1[i]!=' '||str1[i]==' '&&str1[i+1]!=' ')
		{
			str3[0]=str1[i];
			str3[1]='\0';
			strcat(str2,str3);
		}
	}
	cout<<str2;
	return 0;
}