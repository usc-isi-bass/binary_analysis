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
	int a[100],n,i,j,k,t;//??a???????n??????
	cin>>n;//??n
	for (i=0;i<n;i++)
	{
		cin>>a[i];//?????
	}
    for (j=n-1;j>=0;j--)
	{
		for(k=0;k<j;k++)
		{
		 {t=a[n-k-1];a[n-k-1]=a[n-k-2];a[n-k-2]=t;}//?????????????
		}
	
	}
	for (i=0;i<n;i++)
	{
		cout<<a[i];
		if(i!=n-1)cout<<" ";//?????????????
	}
	return 0;

}