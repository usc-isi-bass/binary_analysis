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


int k;
int h[30];
int r[30];
int main()
{
	cin>>k;
	int i,j;
	for(i=0;i<k;i++)
		cin>>h[i];

//	memset(h,0,sizeof(h));
//	memset(r,0,sizeof(r));

	r[k-1]=1;
	for(i=k-2;i>=0;i--)
	{
		if(r[i]>=r[i+1]){
			cout<<"first way taken"<<endl;
			r[i]=r[i+1]+1;
		}
		else
		{
			int max=0;
			for(j=i+1;j<k;j++)
			{
				if(h[j]<=h[i]&&r[j]>max)
					max=r[j];
			}
			r[i]=max+1;
		}
	}
	int ans=0;
	for(i=0;i<k;i++)
	{	
		//cout<<r[i]<<endl;
		if(r[i]>ans) ans=r[i];
	}
	cout<<ans;

}