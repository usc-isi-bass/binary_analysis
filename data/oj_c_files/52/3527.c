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

/**
 *???3.cpp
 *??????
 *???????
 *???12?10?
 */
int main()
{
	int n,m;
	cin>>n>>m;
	int a[102];
	int*p=a;
	for(;p<a+n;p++)
	{cin>>*p;}  //??????
	int temp;
	for(int i=0;i<m;i++)   //??m???
	{
	    for(p=a+n-m+i;p>a+i;p--) //?m????????
		{
			temp=*p;
			*p=*(p-1);
			*(p-1)=temp;
		}
		p=a;         //????a???
	}
	for(;p<a+n-1;p++) //????
	{
		cout<<*p<<' ';
	}
	cout<<*p<<endl;
return 0;
}