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
	int number=0,judge=0;//judge??????????0,number?????
	int i;
	void reverse(int num,int judge);//????
	for(i=0;i<6;i++)
	{
		cin>>number;//????
		if(number==0)//?????????0
			cout<<'0';
		else
		{
			if(number<0)
			{
				cout<<'-';
				number=-number;
			}
			reverse(number,0);
		}
	cout<<endl;
	}
	return 0;
}
void reverse(int num,int judge)
{
	if(num%10!=0||judge)
	{
		cout<<num%10;
		judge=1;
	}
	if(num/10!=0)
		reverse(num/10,judge);
}