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

int varieties=0;//???????varieties???????
void factor(int,int);//?????
int main()//???
{
	int n=0,num=0,i=0;//????
	cin>>n;
	for(i=1;i<=n;i++)//?????????????
	{
		varieties=0;
		cin>>num;
		factor(2,num);//????
		cout<<varieties<<endl;
	}
	return 0;
}
void factor(int first,int num)//??factor????????????
{
	int i=0;
	if(num==1)//????
	{
		varieties++;
	}
	else
	{
		for(i=first;i<=num;i++)//??????1<a1<=a2<=...<=an???
		{
			if(num%i==0)
			{
				factor(i,num/i);
			}
		}
	}
}
