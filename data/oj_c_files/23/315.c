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
	char str[100];
	char str1[20][20];
	int i,j=0,k=0;//str1[j][k]
	cin.getline(str,100);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			str1[j][k]=str[i];
			//cout<<"str1["<<j<<"]["<<k<<"]="<<str[i]<<endl;
			k++;
		}
		else
		{
			str1[j][k]='\0';
			//cout<<"str1["<<j<<"]["<<k<<"]='\ 0'"<<endl;
			k=0;
			j++;
		}
	}
	str1[j][k]='\0';
	for(i=0;i<j;i++)
		cout<<str1[j-i]<<' ';
	cout<<str1[0];
	return 0;
}