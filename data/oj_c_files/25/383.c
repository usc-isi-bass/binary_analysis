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
	int ans[100]={0},flag=0;
	ans[0]=1;
	int n,i,j;
	cin>>n;
	for(j=1;j<=n;j++)
		for(i=0;i<100;i++)
		{
			ans[i]=ans[i]*2+flag;
			if(ans[i]>=10)
			{
				flag=1;
				ans[i]=ans[i]%10;
			}
			else
				flag=0;
		}
	for(i=99;i>=0;i--)
		if(ans[i]!=0)
			break;
	for(j=i;j>=0;j--)
		cout<<ans[j];
	cout<<endl;
	return 0;
}