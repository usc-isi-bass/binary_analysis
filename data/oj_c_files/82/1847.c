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
    int n,i,t=0,a[100],k=0,m=1,min,max,result=0;
    cin>>n;
    for(i=0;i<n;i++)
	{
		m=1;
		cin>>max>>min;
		if(max<90)
			m=0;
		else
		{
			if(max>140)
				m=0;
		}
		if(min>90)
			m=0;
		else
		{
			if(min<60)
				m=0;
		}
		if(m==1)
			t++;
		else
		{
			a[k]=t;
			k++;
			t=0;
		}
	}
	a[k]=t;
	k++;
	for(i=0;i<k;i++)
		if(result<a[i])
			result=a[i];
	cout<<result<<endl;
	return 0;
}