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

//****************************
//* ????1.cpp            *
//* ?? 1000012747          *
//* ???????????? *
//****************************
int m,a[100][100],s;
void guiling()                   //????
{
	int i,j,min;                 //??????i,j,??????????min
	for(i=0;i<m;i++)
	{
		min=pow(2,31.0)-1;
		for(j=0;j<m;j++)
		{
			if(a[i][j]<min)
				min=a[i][j];     //?????????
		}
		for(j=0;j<m;j++)
			a[i][j]=a[i][j]-min;
	}
	for(i=0;i<m;i++)
	{
		min=pow(2,31.0)-1;
		for(j=0;j<m;j++)
		{
			if(a[j][i]<min)
				min=a[j][i];     //?????????
		}
		for(j=0;j<m;j++)
			a[j][i]=a[j][i]-min;
	}
	if(m>=2)
		s=s+a[1][1];             //?????2*2?????????s??a[1][1]??
}
void xiaojian()                     //????
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=1;j<m-1;j++)
			a[i][j]=a[i][j+1];      //?????
	for(j=0;j<m-1;j++)
		for(i=1;i<m-1;i++)
			a[i][j]=a[i+1][j];      //?????
	m--;
	guiling();                      //??????????
	if(m>2)
		xiaojian();                 //???????2*2?????????
	else
		cout<<s<<endl;
}
int main()
{
	int n,t,i,j;                //n,m,t???????????????
	cin>>n;
	t=n;
	while(n>0)
	{
		m=t;
		s=0;
		for(i=0;i<t;i++)
			for(j=0;j<t;j++)
				cin>>a[i][j];   //??????
		guiling();              //????
		xiaojian();             //????
		n--;
	}
	return 0;
}