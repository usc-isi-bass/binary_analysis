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
	char answer[100];
	for(int i=0; i<100; i++) answer[i]='0';
	answer[0]='1';
	int num;
	cin>>num;

	int flag=0;
	while(num>0)
	{
		for(int i=0; i<=80; i++)
		{

			answer[i]=answer[i]+answer[i]-48;
			if(flag==1)
			{
				flag=0;
				answer[i]++;
			}
			if(answer[i]>'9') 
			{
				flag=1;
				answer[i]=answer[i]-10;
			}

		}
		num--;
	}  
	int i=80;
	while(answer[i]=='0')
	{   i--;

	}
	for(int j=i; i>=0; i--)
	{


		cout<<answer[i];
	}
	cout<<endl;
	return 0;
}

