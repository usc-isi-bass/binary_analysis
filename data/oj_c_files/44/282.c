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

void reverse(int num)//?????????
{
	if(num==0)//?0????
		cout<<num<<endl;
	else if(num>0)
	{
		int i=0,n;
		int a[20];
		while(num!=0)//??0???????????
		{
			a[i]=num%10;
			num=num/10;
			i++;
		}
		n=i;//????
		int count=0;
		for(i=0;i<20;i++)//??????????0?????
		{
			if(a[i]==0)
				count++;
			else break;
		}
		for(i=count;i<n;i++)//?????
			cout<<a[i];
		cout<<endl;
	}
}
int main()//???
{
	int num;
	for(int i=1;i<=6;i++)
	{
		cin>>num;
		if(num<0)//??0???????????????
		{
			cout<<"-";
			reverse(-num);
		}
		else
			reverse(num);
	}
	return 0;
}
