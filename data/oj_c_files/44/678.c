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

int f=0;
void reserve(int num)
{
		if((num%10)!=0){
			cout<<num%10;f = 1;
		}
		if(num%10==0&&f==1)
		{
			cout<<"0";
		}
		if(num/10 >0)
		reserve(num/10);

	
}
int main()
{
	int i,num;
	for(i=0;i<6;i++)
	{
		f=0;		
		cin>>num;
		if(num<0){
		num=0-num;
		cout<<"-";
		}
		reserve(num);
		cout<<endl;
	}
	return 0;
}

