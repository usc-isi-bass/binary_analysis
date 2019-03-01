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
	int N;
	cin>>N;//??N
	int a[100]={0};//??????????
	a[99]=1;//?????????????1
	for(int i=1;i<=N;i++)
		for(int j=0;j<=99;j++)
		{
			a[j]=a[j]*2;//?????2
			if(a[j]>=10)//????????10
			{
				a[j-1]=a[j-1]+1;//?????
				a[j]=a[j]-10;//???10
			}
		}
	int i=0;
	while(a[i]==0)i++;//???????????????????
	for(int j=i;j<=99;j++)
		cout<<a[j];//??
	cout<<endl;
	return 0;
}