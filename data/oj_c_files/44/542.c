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
	void reverse(int num,int o1);
	int number,k;
	for(k=0;k<6;k++)
	{
		cin>>number;
		if(number!=0)	reverse(number,0);//?????0
		else cout<<0;
		cout<<endl;
	}
	return 0;
}
void reverse( int num ,int o1)//?????
{
	int rev=0,fuhao=1,num1,dig,i, ot=o1;
	num1=num;
	if(num!=0)
	{
		if (num1<0)//???????
		{
			cout<<'-';//???????
			num1=-num1;//?????????
			reverse(num1,0);
		}
		else
		{
			
			dig=num1 %10;//????????
			num1=num1/10;//????10
			if(ot||dig!=0)//???????????0
			{
				cout<<dig;//?????0???
				ot=1;//??????,???????????
			}
			reverse(num1,ot);//?????
		}
	}
}
