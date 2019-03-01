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
	int k,i,j;
	int h[26];
	int ans[200];
	memset(ans,0,sizeof(ans));
	cin>>k;
	for(i=0;i<k;++i)
	{
		cin>>h[i];
		ans[i]=1;
	}
	for(i=1;i<k;++i)
		for(j=i-1;j>=0;--j)
			if(h[j]>=h[i] && ans[j]+1>ans[i])
				ans[i]=ans[j]+1;
			int max=0;
	for(i=0;i<k;++i)
		if(ans[i]>max)
			max=ans[i];
	cout<<max<<endl;
	return 0;
}