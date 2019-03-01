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
	char c,ch[100][100]={'\0'};//????????????????????
	int i=0,j=0;
	cin>>c;
	while(c!='\n')
	{
		if(c==' ')//???????????
		{
			i++;
			j=0;
			c=cin.get();
		}
		ch[i][j]=c;
		j++;
		c=cin.get();
	}
	for(;i>=1;i--)//??????????
	{
		j=0;
		while(ch[i][j]!='\0')
		{
			cout<<ch[i][j];
			j++;
		}
		cout<<" ";
	}
	j=0;
	while(ch[0][j]!='\0')//????????????????????????
	{
		cout<<ch[0][j];
		j++;
	}
	return 0;
}