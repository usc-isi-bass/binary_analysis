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

//*****************************
//* ???????            *
//* ??????              *
//* ???2010-12-7           *
//*****************************
int num=1,flag=2;//????1?????,?????
void way(int);
int main()
{
	int a,n;
	cin>>n;
	while(n--)
	{
		cin>>a;
		way(a);
		cout<<num<<endl;
		num=1;
		flag=2;//???
	}
	return 0;

}
void way(int a)
{
	int i,max;
	max=sqrt(a);
	for(i=flag;i<=max;i++)//?????????????????????
	{
		if(a%i==0)//????????
		{
			flag=i;//??
			num++;
			way(a/i);//???????????????????
		}
	}
}
