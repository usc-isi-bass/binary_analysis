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

/*
 * shehuimingliu.cpp
 *
 *  Created on: 2011-12-21
 *      Author: Administrator
 */
int main()
{
	int n,a,b,i,count[2][100000]={0, 0},flag=0,*p=*count;
	cin>>n;
	do
	{
		cin>>a>>b;
		if(a!=0||b!=0)
		{
			*(p+a)+=1;
			*(p+100000*1+b)+=1;
		}
	}
	while(a!=0||b!=0);
	for(i=0;i<n;i++)
	{
		if(*(p+i)==0&&*(p+100000*1+i)==n-1)
		{
			cout<<i<<endl;
			flag=1;
		}
	}
	if(flag==0)
		cout<<"NOT FOUND"<<endl;
	return 0;
}