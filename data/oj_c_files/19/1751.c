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
	char ch[100][100],str1[100],str2[100];        //???????
	int i=0,j;                                   //?????
	do                                           //?????
	{
		cin>>ch[i];
		i++;
	}
	while(getchar()!='\n');
	cin>>str1>>str2;
	for(j=0;j<i;j++)
	{
		if(strcmp(str1,ch[j])==0)                //???????????????????
		{
			strcpy(ch[j],str2);
		}
	}
	for(j=0;j<i-1;j++)                           //??????
	{
		cout<<ch[j]<<" ";
	}
	cout<<ch[i-1];
    return 0;
}