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

int a[100],b[100];                 //???????????????????
int p,q;
void input()                      //?????input??????????????????
{
	cin>>p>>q;
	int i=0;
	for(i=0;i<p;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<q;i++)
	{
		cin>>b[i];
	}
}
void paixu(int a[100],int b[100])    //?????paixu??????????????????????
{
	int i=0,j=0;
	int c;
	for(i=1;i<=p-1;i++){
		for(j=0;j<p-i;j++){
			if(a[j]>a[j+1])
			{
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
	}
	for(i=1;i<=q-1;i++){
		for(j=0;j<q-i;j++){
			if(b[j]>b[j+1])
			{
				c=b[j];
				b[j]=b[j+1];
				b[j+1]=c;
			}
		}
	}
}
void connect(int a[100],int b[100])   //????connect????????????????????????
{
	for(int i=0;i<q;i++)
	{
		a[p+i]=b[i];
	}
}
void output(int a[100])                 //??????????????
{
	int i=0;
	cout<<a[0];
	for(i=1;i<p+q;i++)
	{
		cout<<" "<<a[i];
	}
}
int main()                    //?????
{
	input();
	paixu(a,b);
	connect(a,b);
	output(a);
	return 0;	
}