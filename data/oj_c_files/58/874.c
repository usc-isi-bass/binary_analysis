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
 * pandshfwc++hfyy.cpp
 *
 *  Created on: 2011-12-10
 *      Author: q
 */
int judgerr(char *);//???????????
int main()
{
	int n,i;//?????????
	char a[1000][81]={0},(*p)[81],b[10];//??????????B?????
	p=a;//??????
	cin>>n;
	cin.getline(b,10);
	for(i=0;i<n;i++)//??
		{
		cin.getline(*p,81);
		p++;
		}
	p=a;//???????
	while(p<(a+n))//??????????
	{
		int judgement=judgerr(*p);
		cout<<judgement<<endl;//????
		p++;//????
	}
	return 0;

}
int judgerr(char *p1)
{
	int judger=1;
	if(*p1<65||(*p1>'Z'&&*p1<'a'&&*p1!='_')||*p1>'z')//????C++???
		judger=0;
	else
	{
		p1++;//?????2?
	while(*p1!='\0')
	{
		if((*p1>'9'&&*p1<64)||(*p1>'Z'&&*p1<'a'&&*p1!='_')||*p1>'z'||*p1<'0')//?????
		{
			judger=0;
			break;
		}
		p1++;//????
	}
	}
	return judger;
}

