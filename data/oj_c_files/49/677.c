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
	char str[505]={'\0'};
	char str1[505]={'\0'};
	char str2[505]={'\0'};
	int length,i,j,k,p;
	cin.getline(str,505);
	length=strlen(str);
	for(i=2;i<=length;i++)//i??????????????
		for(j=0;j<=length-i;j++)//j???????????????
		{
			p=0;
			for(k=j;k<j+i;k++)//??????i?????????
			{
				str1[p]=str[k];
				str2[p]=str[j+i-1-(k-j)];
				p++;
			}
			if(strcmp(str1,str2)==0)
			{
				k=0;
				while(str1[k]!='\0')
				{
					cout<<str1[k];
					k++;
				}
				cout<<endl;
			}
		}
	return 0;
}