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
	int n=0,num=0,i=0;
	char a[10000]={'\0'},*p=a;
	cin>>n;
	cin.get();
	char c=getchar();
	while(c!='\n')
	{
		*p++=c;
		num++;
		c=getchar();
	}
	p=a+80;
	while(*p!='\0')
	{
		while(*p != ' ' && p < a+num-1)
		{
			p-- ;
		}
		*p = '\n';
		//while(*p!=' ')
		//{
		//	p--;
		//	if(*p==' ')
		//	{
		//		*p='\n';
		//	}
		//}
		p=p+81;
	}
	p = a+num-1;
	while(*p == ' ')
	{
		*p = '\0';
		p --;
	}
	//bool m=true;
	//for(p=a+num-1;p>=a;p--)
	//{
	//	if(m==true && *p==' ')
	//	{
	//		*p='\0';
	//	}
	//	else if(*p!=' ')
	//	{
	//		m=false;
	//	}
	//}
	for(p=a;*p!='\0';p++)
		cout<<*p;
	return 0;
}