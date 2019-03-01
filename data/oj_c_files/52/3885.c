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

/************************************
 * ????							*
 *									*
 *  Created on: 2010-12-14			*
 *      Author: ??					*
 ************************************/
void move(int *p,int m,int n)		//???????????
{
	int a;
	a=*(p+m-1);						//?????????????a?
	for(int i=m-1;i>0;i--)
	{
		*(p+i)=*(p+i-1);			//??????????
	}
	*p=a;
}
int main()
{
	int a,b;
	cin>>a>>b;						//???????????
	const int a1=a;
	int num[a1];
	for(int j=0;j<a;j++)
	{
		cin>>num[j];				//????
	}
	while(b>0)
	{
		move(&num[0],a,b);			//??????
		b--;
	}
	cout<<num[0];
	for(int j=1;j<a;j++)
	{
		cout<<" "<<num[j];			//????
	}
	return 0;
}
