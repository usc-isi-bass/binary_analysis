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

int sum=0; //??????sum????????
int yueshu[100]={0}; 
int s=0;

void number(int num,int s)
{
	int i;
	for(i=s;i>=0;i--)
	{
		if(num<yueshu[i])
			continue;
		if(num==yueshu[i])
			sum++;
		else if(num>yueshu[i]&&num%yueshu[i]==0)
			number(num/yueshu[i],i);
	}
}

int main()
{
	int n=0;
	cin>>n;
	int num=0;
	while(cin>>num)
	{
		int i=0,j=0;
		for(i=2;i<=num;i++)
			if(num%i==0)
			{
				yueshu[j]=i;
				j++;
			}
		s=j-1;
		number(num,s);
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}