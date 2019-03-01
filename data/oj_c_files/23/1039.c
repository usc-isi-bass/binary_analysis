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
	char ch;
	char out[100][100];
	int len=0,count=0;
	while(cin.get(ch))
	{
		if(ch=='\n')
			break;
		else if(ch==' ')
		{
			out[len][count]='\0';
			len++;
			count=0;
		}
		else
		{
			out[len][count]=ch;
			count++;
		}
	}
	out[len][count]='\0';
	for(int i=len; i>=0; i--)
	{
		cout<<out[i];
		if(i)
			cout<<" ";
	}
	cout<<endl;
	return 0;
}