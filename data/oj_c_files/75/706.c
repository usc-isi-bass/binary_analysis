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

//**************************
//*????????        **
//*?????? 1300012863 **
//*???2013.11.1        **
//**************************
int main()  
{ 
	int x[1005],y[1005],c[1005],d[1005];                //???????x??????y?????
	char ch;
	int i,p,n,a;
	for(i=1; ;i++)                      //?????????
	{
		cin>>x[i];
		ch=cin.get();
		c[i]=x[i];
		if(ch!= ',')
		{break;}
	}
	for(a=1; ;a++)                      //?????????
	{
		cin>>y[a];
		ch=cin.get();
		d[a]=y[a];
		if(ch!= ',')
		{break;}
	}
		for(int m=1;m<=i-1;m++)         //??????????????? 
		{
			if(x[m]<x[m+1])
			{
				p = x[m];
				x[m] = x[m+1];
				x[m+1] = p;
			}
		}
		for(int m=1;m<=i-1;m++)        //???????????????
		{
			if(y[m]>y[m+1])
			{
				p = y[m];
				y[m] = y[m+1];
				y[m+1] = p;
			}
		}
		for(int m=1;m<=i-2;m++)        //????????????????
		{
			if(y[m]>y[m+1])
			{
				p = y[m];
				y[m] = y[m+1];
				y[m+1] = p;
			}
		}
	int h[1005];
	for(int k=x[i];k<=y[i-1];k++)            //?????????????,???????h?
	{
		n = 0;
		for(int p=1;p<=i;p++)
		{
			if((c[p]<=k)&&(k<d[p]))
			{
				n = n + 1;
			}
		}
		h[k] = n;
	}
    for(int j=x[i];j<=(y[i-1]-1);j++)             //???????????h????             
	{
			if(h[j]>h[j+1])
			{
				p = h[j];
				h[j] = h[j+1];
				h[j+1] = p;
			}
	}
    cout<<i<<" ";                       //????????
	cout<<h[y[i-1]];
	return 0;
}