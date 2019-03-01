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
	int h[26],f[26];
	int i=0,j=0,n;
	cin>>n;
	f[0]=0;
	h[0]=0;
	int max=0;
	for(i=1;i<=n;i++)
	{
		cin>>h[i];
		max=0;
		for(j=i-1;j>0;j--)
		{
			if(h[i]<=h[j]&&max<f[j]+1)
			{
				max=f[j];
			}
		}
		f[i]=max+1;
	}
	max=0;
	for (i=1;i<=n;i++)    //?????????????????????
	{                           //????? ????????
		if (max<f[i])
			max=f[i];
	}
	cout<<max<<endl;
	return 0;
}