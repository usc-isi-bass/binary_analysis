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
int num[26];
int val[26];
int main()
{

	
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cin>>num[i];
		val[i]=0;
	}
	//for(int i=0;i<k;i++)
	//	cout<<num[i]<<endl;
	for(int i=k-1;i>=0;i--)
	{
		if(i==k-1)
			val[i]=1;
		else
		{
			int temp=0;
			for(int j=i;j<k;j++)
			{
				if(num[i]>=num[j]&&val[j]>=temp)
				{
					temp=val[j];
	//				cout<<num[i]<<" "<<num[j]<<" "<<temp<<endl;
				}
			}
			val[i]=temp+1;
		}
		
		
	}
int sum=0;
for(int i=0;i<k;i++)
{
	//cout<<val[i]<<endl;
		if(val[i]>=sum)
			sum=val[i];
}
cout<<sum<<endl;

return 0;

}