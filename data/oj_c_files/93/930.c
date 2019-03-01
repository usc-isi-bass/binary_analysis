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
	int n;
	cin>>n;//?????
	int a[3]={3,5,7};//????357
	if(n%3==0&&n%7==0&&n%5==0)//????3?5?7???????3 5 7??????????)
		cout<<"3 5 7";
	else if(!(n%3==0||n%7==0||n%5==0))
		cout<<"n";//????????????????n)
	else //???????????????3 5?? 3 7??5 7,???????
	{
		int k=0;
		int b[2];
		for(int i=0;i<3;i++)
		{
			if(n%a[i]==0)
			{ b[k]=a[i];
		    k=k+1;}
		}
		for(int j=0;j<k;j++)
		{
			if(j==k-1)cout<<b[j];
			else cout<<b[j]<<" ";
		}
	}
	return 0;
}