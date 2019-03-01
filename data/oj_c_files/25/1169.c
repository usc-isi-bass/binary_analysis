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

//
//  main.cpp
//  final
//
//  Created by blues cookie on 13-1-11.
//  Copyright (c) 2013? blues cookie. All rights reserved.
//

int a[100]={1};
int len=1;
void cal(int num)
{
	if(num==0)return;int carrybit=0;
	int i;
	for(i=0;i<len;i++)
	{
		a[i]=a[i]*2+carrybit;
		carrybit=a[i]/10;
		a[i]=a[i]%10;
	}
	if(carrybit==1)
	{
		len++;
		a[i]=1;
	}
	cal(num-1);
}
int main()
{
	int num;
	cin>>num;
	cal(num);
	for(int j=len-1;j>=0;j--)
	{
		cout<<a[j];
    }
}
