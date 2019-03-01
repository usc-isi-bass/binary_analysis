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

void zhaodui(char str[]);
int main()
{
	char str[100];
	cin.getline(str,100,'\n');
	zhaodui(str);
	return 0;
}
void zhaodui(char str[])
{
	char nan[2],nv[2];
	char str1[100];
	int i,j;
	strcpy(str1,str);
	nan[0]=str[0];
	for(i=0;i<99;i++)
	{
		if(str[i]!=str[0])
		{
			nv[0]=str[i];
			break;
		}
	}
	for(j=0;j<99;j++)
	{
		for(i=1;i<98;i=i+2)
		{
			if(str[j]==nv[0]&&str[j-i]==nan[0])
			{
				cout<<j-i<<" "<<j<<endl;
				str[j]='\0';
				str[j-i]='\0';
			}
		}
	}
}
