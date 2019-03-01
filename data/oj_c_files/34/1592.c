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

//10.12 ????
//???   1100012799
//??????
int main ()
{
	int num;
	cin>>num;
	if (num==1)      cout<<"End"<<endl;//?????1???????,????????
	else if (num!=1)//????1 ??????
	{
		do
		{
			if (num%2==0)//????
			{
				num=num/2;
				cout<<num*2<<"/2="<<num<<endl;//
			}
			else if (num%2==1)//????
			{
				num=num*3+1;
				cout<<(num-1)/3<<"*3+1="<<num<<endl;
			}
		}
		while (num!=1);//??????1?????
		cout<<"End"<<endl;
	}
	return 0;
}
