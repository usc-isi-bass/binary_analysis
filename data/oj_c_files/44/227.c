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

//********************************
//* ????2.cpp                *
//* ?? 1000012747              *
//* ????????             *
//********************************
int reverse(int x)                 //?????????????
{
	int b[10],i,j,c=0;        //????b?????????i,j??????c??????
	for(i=0;i<10;i++)
	{
		b[i]=x%10;
		x=x/10;
		if (x<10)
		{
			b[i+1]=x;
			break;
		}
	}                          //??????????
	j=0;
	while(b[j]==0)
		j++;              //??????0?????
	for(;j<i+2;j++)
		c=c+b[j]*(pow(10.0,i+1-j));   //??c??
	return(c);
}
int main()
{
	int a,n=6,c;               //??????a?n=6????6???c??????
	while (n>0)
	{
		cin>>a;
		if(a==0)
			cout<<0<<endl;
		else if(a<0)
		{
			a=0-a;              //a<0?????
			c=reverse(a);
			cout<<"-"<<c<<endl;
		}
		else
		{
			c=reverse(a);
			cout<<c<<endl;
		}
		n--;
	}
	return 0;
}