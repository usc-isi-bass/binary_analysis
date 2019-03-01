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
	int a,b,c,i,t,sum=0,n,m;
	int A[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};//??????
	int B[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//??
	cin>>n;
	for(m=0;m<n;m++)
	{
	cin>>a>>b>>c;//???  ?????
	if(b>c)//??????????????
	{
		t=b;b=c;c=t;
	}
	sum=0;
	if(((a%4==0&&a%100!=0)||((a%400)==0))==1)//??????
		for(i=b;i<c;i++)
			sum+=A[i];
	else
		for(i=b;i<c;i++)
			sum+=B[i];
	if(sum%7==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	}
	return 0;
}

