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
	//cout<<'Z'-0<<endl;
	char a[1000],b[1000]={0};//cout<<b[100]<<endl;
	int sum[1000]={0},i=0,j=0,t=0;
	cin.getline(a,1000);
	for(i=0;i<strlen(a);i++)
	{
		//cout<<"12345"<<endl;
		if(a[i]==a[i+1]||a[i]==a[i+1]+32||a[i]==a[i+1]-32)
		{
			sum[j]=sum[j]+1;
			//cout<<"ok"<<endl;
		}
		else
		{
			sum[j]++;
			b[j]=a[i];
			if(b[j]>90)
			{
				b[j]=b[j]-32;
			}
			j++;
		}
		//cout<<j<<sum[j]<<endl;
		//cout<<a[i]<<endl;
	}
	//cout<<sum[1]<<endl;
	do
	{
		//cout<<"1234567"<<endl;
		cout<<"("<<b[t]<<","<<sum[t]<<")";
		t++;
	}while(sum[t]!=0);
	cout<<""<<endl;
	return 0;
}